#include<bits/stdc++.h>
using namespace std;
#define mx 200010
int ara[mx];
int tree[mx*4];

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

    tree[node] =  tree[left]+tree[right];
}

void update(int node,int b,int e,int i ,int j,int x)
{
    if(b>j||e<i)return;
    if(b>=i&&e<=j)
    {
        tree[node] = x;
        return;
    }
    int left = node*2;
    int right = node*2+1;
    int mid = (b+e)/2;

    update(left,b,mid,i,j,x);
    update(right,mid+1,e,i,j,x);
    tree[node] = tree[left]+tree[right];
}

int query(int node,int b,int e,int i,int j)
{
    if(b>j||e<i)return 0;

    if(b>=i&&e<=j)return tree[node];

    int left = node*2;
    int right = node*2+1;
    int mid = (b+e)/2;
    int r1 = query(left,b,mid,i,j);
    int r2 = query(right,mid+1,e,i,j);

    return r1+r2;

}

int main()
{
    int t,a,b,i,j,x,y,sum,k=0,n;
    char ch[10];

    while(scanf("%d",&n)==1&&n!=0)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
        }
        build(1,1,n);

        if(k>0)printf("\n");
        printf("Case %d:\n",++k);


        while(scanf("%s",&ch)==1)
        {
            if(strcmp(ch,"END")==0)
            {
                break;
            }
            scanf("%d %d",&a,&b);

            if(strcmp(ch,"S")==0)
            {
                update(1,1,n,a,a,b);
            }
            else if(strcmp(ch,"M")==0)
            {
                x = query(1,1,n,a,b);
                printf("%d\n",x);
            }
        }
    }














return 0;
}
