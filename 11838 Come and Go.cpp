#include<bits/stdc++.h>
using namespace std;
int visited[2005];
vector<int>G[2005];
vector<int>G2[2005];
vector<int>vec;
int n;
void zero()
{
    for(int i=0;i<=n+2;i++)
        visited[i] = 0;
}
void clc()
{
    for(int i=0;i<=n+2;i++)
    {
        G[i].clear();
        G2[i].clear();
    }
}
void dfs(int u)
{
    int i,v;
    visited[u] = 1;

    for(i=0;i<G[u].size();i++)
    {
        v = G[u][i];
        if(visited[v]==0)
        {
            dfs(v);
        }
    }
    vec.push_back(u);
}
void dfs2(int u)
{
    int i,v;
    visited[u] = 1;
    for(i=0;i<G2[u].size();i++)
    {
        v = G2[u][i];
        if(visited[v]==0)
        {
            dfs2(v);
        }
    }
}
int main()
{
    int m,i,j,x,y,a,b,c;
    while(scanf("%d %d",&n,&m)==2&&n!=0&&m!=0)
    {
        clc();

        vec.clear();
        for(i=1;i<=m;i++)
        {
            scanf("%d %d %d",&a,&b,&c);
            if(c==1)
            {
                G[a].push_back(b);
                G2[b].push_back(a);
            }
            else{
                G[a].push_back(b);
                G[b].push_back(a);
                G2[b].push_back(a);
                G2[a].push_back(b);
            }
        }
        zero();
        for(i=1;i<=n;i++)
        {
            if(visited[i]==0)
            {
                dfs(i);
            }
        }

        zero();
        int sum = 0;
        for(i=vec.size()-1;i>=0;i--)
        {
            if(visited[vec[i]]==0)
            {
                sum++;
                dfs2(vec[i]);
            }
        }
        if(sum>1)
            printf("0\n");
        else{
            printf("1\n");
        }

    }







return 0;
}
