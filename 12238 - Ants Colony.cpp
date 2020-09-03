#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 100010
vector<pair<int,int> >G[mx];
int sparse[mx][20];
int visited[mx];
int level[mx];
int parent[mx];
ll cost[mx];

void zero(int n,int m)
{
    int i,j;
    for(i=0;i<=n+5;i++)
    {
        G[i].clear();
        visited[i] = 0;
        level[i] = 0;
        parent[i] = 0;
        cost[i] = 0;
        for(j=0;j<=m+2;j++)
        {
            sparse[i][j] = -1;
        }
    }
}

void bfs(int u)
{
    visited[u] = 1;
    parent[u] = -1;

    queue<int>q;
    q.push(u);
    while(!q.empty())
    {
        u = q.front();
        q.pop();
        for(int i=0;i<G[u].size();i++)
        {
            int v = G[u][i].first;
            int c = G[u][i].second;
            if(visited[v]==0)
            {
                visited[v] = 1;
                level[v] = level[u] + 1;
                parent[v] = u;
                cost[v] = cost[u]+c;
                q.push(v);
            }
         }
    }
}

void lca_init(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        sparse[i][0] = parent[i];
    }

    for(j=1;(1<<j)<n;j++)
    {
        for(i=0;i<n;i++)
        {
            if(sparse[i][j-1]!=-1)
            {
                sparse[i][j] = sparse[sparse[i][j-1]][j-1];
            }
        }
    }

}

int lca_query(int n,int p,int q)
{
    if(level[p]<level[q])
    {
        int temp = p;
        p = q;
        q = temp;
    }

    int log = 1;
    while(1)
    {
        if((1<<log>level[p]))break;
        log++;
    }

    for(int i=log;i>=0;i--)
    {
        if(level[p]-(1<<i)>=level[q])
        {
             p = sparse[p][i];
        }
    }
    if(p==q)return q;

    for(int i=log;i>=0;i--)
    {
        if(sparse[p][i]!=-1&&sparse[p][i]!=sparse[q][i])
        {
            p = sparse[p][i];
            q = sparse[q][i];
        }
    }
    return  parent[p];


}
int main()
{

    int n,m,a,b,c,i,j,x,y;

    while(scanf("%d",&n)==1&&n!=0)
    {
        m = log2(n)+1;
        zero(n,m);
        for(i=1;i<n;i++)
        {
            scanf("%d %d",&a,&c);
            G[i].push_back({a,c});
            G[a].push_back({i,c});
        }
        bfs(0);
        lca_init(n);
        scanf("%d",&m);
        int k = 0;
        while(m--)
        {
            k++;
            if(k>1)printf(" ");
            scanf("%d %d",&a,&b);

            x = lca_query(n,a,b);
            printf("%lld",cost[a]+cost[b]-2*cost[x]);
        }
        printf("\n");
    }

return 0;
}
