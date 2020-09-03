#include<bits/stdc++.h>
using namespace std;
int visited[100005];
vector<int>G[100005];
vector<int>vec;
int ara[100005];
int n,ind,z;
void zero()
{
    for(int i = 0;i<=n+2;i++)
    {
        visited[i] = 0;
    }
}
void clc()
{
    for(int i = 0;i<=n+2;i++)
    {
        G[i].clear();
    }
}
void dfs(int u)
{
    int v;
    visited[u] = 1;

    for(int i=0;i<G[u].size();i++)
    {
            v = G[u][i];
        if(visited[v]==0)
        {
            dfs(v);
        }
    }
    if(z==0)
    {
        ara[ind--] = u;
        vec.push_back(u);
    }
}
int main()
{
   // freopen("output.txt","w",stdout);
    int i,j,x,y,a,b,m,t;

    scanf("%d",&t);
    while(t--)
    {
        clc();
        zero();
        vec.clear();
        z = 0;
        ind  = z;

        scanf("%d %d",&n,&m);
        for(i=1;i<=m;i++)
        {
            scanf("%d %d",&a,&b);
            G[a].push_back(b);
        }
        ind = n;
        for(i=1;i<=n;i++)
        {
            if(visited[i]==0)
            {
                dfs(i);
            }
        }
        int sum = 0;
        zero();
        z = 1;

        for(i=vec.size()-1;i>=0;i--)
        {
            if(visited[vec[i]]==0)
            {
                sum++;
                dfs(vec[i]);
            }
        }

        printf("%d\n",sum);

    }


return 0;
}
