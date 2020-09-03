#include<bits/stdc++.h>
using namespace std;

vector<int>v[350];
int visited[350];
int n,flag;

void zero()
{
    for(int i=0;i<=n+2;i++)
    {
        v[i].clear();
        visited[i] = 0;
    }

}

void bfs(int u)
{
    int i,b;
    visited[u] = 1;
    queue<int>q;
    q.push(u);

    while(!q.empty())
    {
        u = q.front();
        q.pop();
        //printf("u = %d visited u = %d\n",u,visited[u]);

        for(i=0;i<v[u].size();i++)
        {
             b = v[u][i];
            // printf("b = %d visited b = %d\n",b,visited[b]);

             if(visited[b]==0&&visited[u]==1)
             {
              //   printf("yoo 1\n");
                 visited[b] = 2;
                 q.push(b);
             }
             else if(visited[b]==0&&visited[u]==2)
             {
                // printf("yoo 2\n");
                 visited[b] = 1;
                 q.push(b);
             }
             else if(visited[b]!=0&&visited[b]==visited[u])
             {
                // printf("yoo 3\n");
                 flag = 1;
                 return ;
             }
        }


    }

}

int main()
{
    int i,a,b,j,x,y;

    while(scanf("%d",&n)==1&&n!=0)
    {
        zero();

        while(scanf("%d %d",&a,&b)==2)
        {
            if(a==0&&b==0)break;

            v[a].push_back(b);
            v[b].push_back(a);
        }


        flag = 0;

        bfs(1);

        if(flag==0)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }

    }







return 0;
}
