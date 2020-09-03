#include<bits/stdc++.h>
using namespace std;
int visited[1111];
int d[1111];
int low[1111];
int parent[1111];
vector<int>G[1111];
int mark[1111][1111];
int bridge[1111][1111];
vector<int>ans[1111];
int tim;

void zero()
{
    tim = 0;
    for(i=0;i<=1100;i++)
    {
        G[i].clear();
        visited[i] = 0;
        parent[i] = i;
        d[i] = 0;
        low[i] = 0;
        ans[i].clear();

        for(j=0;j<=1100;j++)
        {
            mark[i][j] = 0;
            bridge[i][j] = 0;
        }
    }
}

void articulation(int u)
{
    tim++;

    visited[u] = 1;
    low[u] =  tim;
    d[u] = tim;

    for(int i = 0;i<G[u].size();i++)
    {
        int v = G[u][i];
        if(v==parent[u])continue;
        else if(visited[v]==1)
        {
            if(mark[v][u]==0&&mark[u][v]==0)
            {
                bridge[u][v] = 1;
                mark[u][v] = 1;
                mark[v][u] = 1;
                ans[v].push_back(u);
            }
            low[u] = min(low[u],d[v]);
        }
        else if(visited[v]==0)
        {
            if(nark[u][v]==0&&mark[v][u]==0)
            {
                mark[u][v] = 1;
                mark[v][u] = 1;
                bridge[u][v] = 1;
                ans[u].push_back(v);
            }
            parent[v] = u;
            articulation(u);

            low[u] = min(low[u],low[v]);

            if()






        }
    }



}
int main()
{

    int  n,m,a,b,i,j,x,y;

    while(scanf("%d %d",&n,&m)==2)
    {
        zero();

        for(i=1;i<=m;i++)
        {
            scanf("%d %d",&a,&b);
            G[a].push_back(b);
            G[b].push_back(a);
        }

        articulation(1);


    }













return 0;
}
