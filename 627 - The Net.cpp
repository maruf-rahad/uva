#include<bits/stdc++.h>
using namespace std;
vector<int>G[310];
int visited[310];
int parent[310];
int flag;
void zero(int n)
{
    for(int i=0;i<=n+5;i++)
    {
        G[i].clear();
    }
}
void zero2(int n)
{
    for(int i=0;i<=n+5;i++)
    {
        visited[i] = 0;
        parent[i] = 0;
    }
}

void bfs(int u,int v)
{
    queue<int>q;
    q.push(u);

    while(!q.empty())
    {
        u = q.front();
        q.pop();
        for(int i=0;i<G[u].size();i++)
        {
            int b = G[u][i];

            if(visited[b]==0)
            {
                visited[b] = 1;
                parent[b]  = u;
                q.push(b);
                if(b==v)
                {
                    flag = 1;
                    return;
                }
            }
        }
    }
}
void printpath(int u,int v)
{
    if(parent[v]==u)
    {
        printf("%d %d",parent[v],v);
       return;
    }
    else{
        printpath(u,parent[v]);
        printf(" %d",v);
    }
}
int main()
{
    int n,m,a,b,i,j,x,y;
    string s;
    char str;

    while(scanf("%d",&n)==1)
    {
        zero(n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a,&str);
            getline(cin,s);
           stringstream ss(s);
           while(ss>>str>>x)
           {
               G[a].push_back(x);
           }
        }
        scanf("%d",&m);
        printf("-----\n");
        while(m--)
        {
            zero2(n);
            flag = 0;
            scanf("%d %d",&a,&b);
            bfs(a,b);
            if(flag==0)
            {
                printf("connection impossible\n");
            }
            else{
                printpath(a,b);
                printf("\n");
            }

        }

    }













return 0;
}
