#include<bits/stdc++.h>
using namespace std;
int G[20][20];
int visited[20];
int flag;
vector<int>v;
void zero(int n)
{
    for(int i=0;i<=n+2;i++)
    {
        visited[i] = 0;
        for(int j=0;j<=n+2;j++)
        {
            G[i][j] = 0;
        }
    }
}
void dfs(int u,int sum,int m,int n)
{

    v.push_back(u);
    visited[u] = 1;
    if(sum==m)
    {
        flag = 1;
        printf("(%d",v[0]);
        for(int i=1;i<v.size();i++)
        {
            printf(",%d",v[i]);
        }
        printf(")\n");
        return;
    }
    for(int i=1;i<=n;i++)
    {
        if(G[u][i]==1&&visited[i]==0)
        {
            dfs(i,sum+1,m,n);
            visited[i] = 0;
            v.pop_back();
        }
    }
}
int main()
{
   // freopen("output.txt","w",stdout);
    int n,m,i,j,k=0,a;
    while(scanf("%d %d",&n,&m)==2)
    {
        zero(n);
        v.clear();
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                scanf("%d",&G[i][j]);
            }
        }
        flag = 0;
        k++;
        if(k>1)printf("\n");
        dfs(1,0,m,n);
        if(flag==0)
        {
            printf("no walk of length %d\n",m);
        }
        scanf("%d",&a);
    }












return 0;
}
