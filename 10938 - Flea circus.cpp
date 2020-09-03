#include<bits/stdc++.h>
using namespace std;
#define mx 5020
vector<int>G[mx];
int sparse[mx][16];
int level[mx];
int visited[mx];
int parent[mx];

void zero(int n,int m)
{
    int i,j;
    for(i=0;i<=n+5;i++)
    {
        G[i].clear();
        visited[i] = 0;
        level[i] = 0;
        parent[i] = 0;
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
            int v = G[u][i];
            if(visited[v]==0)
            {
                visited[v] = 1;
                level[v] = level[u]+1;
                parent[v] = u;
                q.push(v);
            }
        }
    }
}

void lca_init(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        sparse[i][0] = parent[i];
    }
    for(j=1;(1<<j)<=n;j++)
    {
        for(i=1;i<=n;i++)
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
        if(1<<log>level[p])break;
        log++;
    }

    for(int i=log;i>=0;i--)
    {
        if(level[p]-(1<<i)>=level[q])
        {
            p = sparse[p][i];
        }
    }
    if(p==q)
    {
        return p;
    }
    for(int i=log;i>=0;i--)
    {
        if(sparse[p][i]!=-1&&sparse[p][i]!=sparse[q][i])
        {
            p = sparse[p][i];
            q = sparse[q][i];
        }
    }
    return parent[p];
}

int findd(int n,int p,int sum)
{
    if(sum==0)return p;
    int log = 1;
    while(1)
    {
        if(1<<log>level[p])break;
        log++;
    }
    for(int i=log;i>=0;i--)
    {
        if((1<<i)<=sum&&sum>0)
        {
            p = sparse[p][i];
            sum-=(1<<i);
        }
    }
    return p;
}
int main()
{
    int n,m,a,b,c,i,j,x,y,z;

    while(scanf("%d",&n)==1&&n!=0)
    {
        m = log2(n)+1;
        zero(n,m);
        for(i=1;i<n;i++)
        {
            scanf("%d %d",&a,&b);
            G[a].push_back(b);
            G[b].push_back(a);
        }
        bfs(1);
        lca_init(n);
        scanf("%d",&m);
        while(m--)
        {
            scanf("%d %d",&a,&b);
            x = lca_query(n,a,b);
            int mot = level[a]+level[b]-2*level[x]+1;
            int dist = level[a]-level[x]+1;

            if(mot%2==0)
            {
                c = mot/2;
                if(dist>=c)
                {
                    y = findd(n,a,c-1);
                    if(level[y]>level[x])
                    {
                        z = parent[y];
                    }
                    else {
                        z = findd(n,b,c-1);
                    }
                }
                else{
                    z = findd(n,b,c-1);
                    y = parent[z];
                }
                printf("The fleas jump forever between %d and %d.\n",min(y,z),max(y,z));
            }
            else {
               c = mot/2+1;
               if(dist>=c)
               {
                   y = findd(n,a,c-1);
               }
               else{
                    c = c-dist;
                    y = findd(n,b,level[b]-level[x]-c);
               }
               printf("The fleas meet at %d.\n",y);
            }
        }

    }

/*
8
1 2
1 3
2 4
2 5
3 6
3 7
5 8

*/


return 0;
}
