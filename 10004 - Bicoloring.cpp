#include<bits/stdc++.h>
using namespace std;
vector<int>v[205];
int visited[210];
int n,flag;

void zero()
{
    for(int i = 0;i<=n+2;i++)
    {
        visited[i] = 0;
        v[i].clear();
    }
}

void bfs(int u)
{
    visited[u] = 1;
    queue<int>q;
    q.push(u);

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int i=0;i<v[u].size();i++)
        {
            int a = v[u][i];
            if(visited[a]!=0&&visited[u]==visited[a])
            {
                flag = 1;
            }
            else if(visited[u]==1&&visited[a]==0)
            {
                visited[a] = 2;
                q.push(a);
            }
            else if(visited[u]==2&&visited[a]==0)
            {
                visited[a] = 1;
                q.push(a);
            }
        }
    }

}
int main()
{
    int a,b,i,j,m;

    while(scanf("%d",&n)==1&&n!=0)
    {
        scanf("%d",&m);
        zero();

        for(i=1;i<=m;i++)
        {
            scanf("%d %d",&a,&b);
            v[a].push_back(b);
            v[b].push_back(a);
        }
        flag = 0;
        bfs(0);

        if(flag==0)
        {
            printf("BICOLORABLE.\n");
        }
        else{
            printf("NOT BICOLORABLE.\n");
        }
    }

return 0;
}
