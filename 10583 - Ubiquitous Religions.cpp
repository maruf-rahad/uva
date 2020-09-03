#include<bits/stdc++.h>
using namespace std;
int parent[50005];
int cnt[50005];
void makeset(int n)
{
    for(int i = 1;i<=n;i++)
    {
        parent[i] = i;
        cnt[i] = 1;
    }
}
int find_parent(int a)
{
    if(parent[a]==a)
    {
        return parent[a];
    }

    parent[a] = find_parent(parent[a]);

    return parent[a];
}
int main()
{
    int n,m,i,j=0,x,y,a,b,sum;

    while(scanf("%d %d",&n,&m)==2)
    {

    if(n==0&&m==0)break;
    makeset(n);

    for(i=1;i<=m;i++)
    {
        scanf("%d %d",&a,&b);
        x = find_parent(a);
        y = find_parent(b);

        if(x!=y)
        {
            parent[y] = x;
            cnt[x]+=cnt[y];
        }
    }
    sum = 0;
    for(i=1;i<=n;i++)
    {
        if(i==find_parent(i))
        {
            sum++;
        }
    }

    printf("Case %d: %d\n",++j,sum);



    }



return 0;
}
