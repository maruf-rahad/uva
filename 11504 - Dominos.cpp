#include<bits/stdc++.h>
using namespace std;
int n;
int visited[100005];
vector<int>G[100005];
vector<int>vec;

void zero()
{
    for(int i =0 ; i <=n+2; i++)
        visited[i] = 0;
}
void clc()
{
    for(int i=0; i<=n+2; i++)
    {
        G[i].clear();
    }
}

void dfs_visit(int u)
{
    visited[u] = 1;

    for(int i = 0 ; i < G[u].size() ; i++)
    {
        int x = G[u][i];
        if(visited[x] == 0)
        {
            dfs_visit(x);
        }
    }
    vec.push_back(u);

}
void dfs()
{
    zero();
    for(int i=1;i<=n;i++)
    {
        if(visited[i]==0)
        {
            dfs_visit(i);
        }
    }
}


int main()
{
    int m,a,b,i,j,x,y,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        vec.clear();
        clc();

        for(i = 1 ; i <= m ; i++)
        {
            scanf("%d %d",&a,&b);
            G[a].push_back(b);
        }
        dfs();
        for(i=0;i<vec.size();i++)
        {
            printf("%d ",vec[i]);
        }



    }












    return 0;
}
