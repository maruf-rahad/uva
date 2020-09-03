#include<bits/stdc++.h>
using namespace std;
#define sz 100006
int ara[100];
int ara2[100];
struct segment{
    int mx;
    int mxin;
};
segment tree[100];


void build(int node,int b,int e)
{
    if(b==e)
    {
        tree[node].mxin = b;
        tree[node].mx = ara2[b];
        return;
    }

    int left = node*2;
    int right = node*2+1;
    int mid = (b+e)/2;

    build(left,b,mid);
    build(right,mid+1,e);

    if(tree[left].mx>=tree[right].mx)
    {
        tree[node].mx = tree[left].mx;
        tree[node].mxin = tree[left].mxin;
    }
    else{
        tree[node].mx = tree[right].mx;
        tree[node].mxin = tree[right].mxin;
    }

}

int query(int node,int b,int e,int i,int j)
{
    if(b>j||e<i)return 0;

    if(b>=i&&e<=j)return tree[node].mx;

    int left =  node*2;
    int right = node*2+1;
    int mid = (b+e)/2;

    int r1 = query(left,b,mid,i,j);
    int r2 = query(right,mid+1,e,i,j);

    return max(r1,r2);
}
int queryin(int node,int b,int e,int i,int j)
{
    if(b>j||e<i)
    {

        return 0;
    }

    if(b>=i&&e<=j)
    {
        tree[node].mxin;
        return tree[node].mxin;
    }

    int left  = node*2;
    int right = node*2+1;
    int mid = (b+e)/2;

    int r1 = queryin(left,b,mid,i,j);
    int r2 = queryin(right,mid+1,e,i,j);

    if(r1==0)
    {
        return r2;
    }
    if(r2==0)
    {
        return r1;
    }

    if(ara2[r1]>=ara2[r2])
    {
        return r1;
    }
    else{
        return r2;
    }




}
int main()
{
    int n,m,a,b,i,j,x,y,sum,last,z;


    while(scanf("%d",&n)==1&&n!=0)
    {
        scanf("%d",&m);

        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
        }

        last = 99999999;
        sum = 0;
        for(i=1;i<=n;i++)
        {
            if(ara[i]!=last)
            {
                sum = 1;
                ara2[i] = 1;
                last = ara[i];
            }
            else{
                sum++;
                ara2[i] = sum;
            }
        }

        build(1,1,n);

        for(i=1;i<=m;i++)
        {
            scanf("%d %d",&a,&b);
            x = query(1,1,n,a,b);
            y = queryin(1,1,n,a,b);
            if(y-a+1>=x)
            {
                printf("%d\n",x);
            }
            else{
                z = y-a+1;
                x = query(1,1,n,y+1,b);

                printf("%d\n",max(z,x));
            }
        }

    }


































return 0;
}
