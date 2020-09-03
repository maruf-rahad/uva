#include<bits/stdc++.h>
using namespace std;
vector<int>G[111111];
int visited[111111];
vector<int>ans[111111];
int d[111111];
int low[111111];
int parent[111111];

int sum,tim;

void zero(int n)
{
    tim = 0;
    sum = 0;
    for(int i = 0;i<=n+10;i++)
    {
        ans[i].clear();
        G[i].clear();
        visited[i] = 0;
        d[i] = 0;
        low[i] = 0;
        parent[i] = i;
    }
}

void articulation(int u)
{
    visited[u] = 1;
    tim++;
    d[u] = tim;
    low[u] = tim;

    for(int i = 0;i<G[u].size();i++)
    {
        int v = G[u][i];

        if(v==parent[u])continue;

        if(visited[v]==1)
        {
            low[u] = min(low[u],d[v]);
        }
        if(visited[v]==0)
        {
            parent[v] = u;
            articulation(v);
            low[u] = min(low[u],low[v]);

            if(d[u]<low[v])
            {
                sum++;
                //printf("yes  %d %d\n",u,v);
                ans[min(u,v)].push_back(max(u,v));
            }
        }


    }

}


int main()
{

    int n,m,a,b,i,j,x,y;
    char str;

    while(scanf("%d",&n)==1)
    {
        zero(n);

        for(i=1;i<=n;i++)
        {
            scanf("%d%c%c%d%c",&a,&str,&str,&m,&str);
            for(j=1;j<=m;j++)
            {
                scanf("%d",&b);
                G[a].push_back(b);
                G[b].push_back(a);
            }
        }


        for(i=0;i<n;i++)
        {
            if(visited[i]==0)
            {
                articulation(i);
            }
        }
        printf("%d critical links\n",sum);

        for(i=0;i<n;i++)
        {
            sort(ans[i].begin(),ans[i].end());

            for(j=0;j<ans[i].size();j++)\
            {
                printf("%d - %d\n",i,ans[i][j]);
            }
        }
        printf("\n");

    }












return 0;
}
