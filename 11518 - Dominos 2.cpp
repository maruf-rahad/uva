#include<bits/stdc++.h>
using namespace std;
vector<int>G[11111];
int visited[111111];
int sum;
void zero(int n)
{
    for(int i=0;i<=n+10;i++)
    {
        G[i].clear();
        visited[i] = 0;
    }
}

void dfs(int u)
{
    sum++;
    visited[u] = 1;

    for(int i=0;i<G[u].size();i++)
    {
        int v = G[u][i];

        if(visited[v]==0)dfs(v);
    }
}
int main()
{

    int t,n,m,a,b,i,j,k;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d %d",&n,&m,&k);;
        zero(n);

        for(i=1;i<=m;i++)
        {
            scanf("%d %d",&a,&b);
            G[a].push_back(b);
        }

        sum = 0;
        for(i=1;i<=k;i++)
        {
            scanf("%d",&a);
            if(visited[a]==0)
            {
                dfs(a);
            }
        }

        printf("%d\n",sum);
    }






return 0;
}
