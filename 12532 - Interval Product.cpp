#include<bits/stdc++.h>
using namespace std;
int ara[100010];
int tree[100010*4];

int multy(int a,int b)
{
    if(a*b>0)return 1;
    else if(a*b==0)return 0;
    else return -1;
}
int single(int a)
{
    if(a>0)return 1;
    else if(a==0)return 0;
    else return -1;
}
void build(int node,int b,int e)
{
    if(b==e)
    {
        tree[node] = ara[b];
        return;
    }

    int left = node*2;
    int right = node*2+1;
    int mid = (b+e)/2;

    build(left,b,mid);
    build(right,mid+1,e);

    tree[node] = multy(tree[left],tree[right]);
}

void change(int node,int b,int e,int x,int y)
{
    if(b>x||e<x)return;
    if(b==e&&b==x)
    {
        tree[node] = y;
        return;
    }
    int left = node*2;
    int right = node*2+1;
    int mid = (b+e)/2;

    change(left,b,mid,x,y);
    change(right,mid+1,e,x,y);

    tree[node] = multy(tree[left],tree[right]);
}
int query(int node,int b,int e,int i,int j)
{
    if(b>j||e<i)return 1;
    if(b>=i&&e<=j)
    {
        return tree[node];
    }

    int left = node*2;
    int right = node*2+1;
    int mid = (b+e)/2;

    int p1 = query(left,b,mid,i,j);
    int p2 = query(right,mid+1,e,i,j);
    return p1*p2;
}
int main()
{
    char str;
    int n,m,a,b,i,j,x,y,sum,flag;

    while(scanf("%d %d",&n,&m)==2)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            ara[i] = single(a);
        }
        build(1,1,n);
        while(m--)
        {
            getchar();
            scanf("%c %d %d",&str,&a,&b);
            if(str=='C')
            {
                b = single(b);
                change(1,1,n,a,b);
            }
            else if(str=='P')
            {
                a = query(1,1,n,a,b);
                if(a==0)
                    printf("0");
                else if(a>0)
                    printf("+");
                else printf("-");
            }
        }

        printf("\n");



    }










return 0;
}
