#include<bits/stdc++.h>
using namespace std;
vector<int>G[120];
int visited[120];
int dis[120];
int cost[120];
int n,neg;
int flag = 0,flag2 = 0;

void zero(int n)
{
    for(int i = 0; i<=n+2; i++)
    {

        visited[i] = 0;
        G[i].clear();
        dis[i] = -1;
    }

}

void bellmanFord()
{
    int i,j,k,u,v,uc,vc;
    dis[1] = 100;
    cost[1] = 100;

    for(i=0; i<n; i++)
    {
        for(j=1; j<=n; j++)
        {
            u = j;
            uc = dis[u];
            if(uc!=-1)
            {


                for(k = 0; k<G[u].size(); k++)
                {
                    v = G[u][k];

                    vc = cost[v];

                    if(uc+vc>0)
                    {
                        dis[v] = uc+vc;
                    }


                }

            }
        }
    }

    for(j=1; j<=n; j++)
    {
        u = j;
        uc = dis[u];
        //printf("%d = %d\n",u,uc);
        if(uc!=-1)
        {


            for(k = 0; k<G[u].size(); k++)
            {
                v = G[u][k];

                vc = cost[v];

                if(uc+vc>0&&uc+vc>dis[v])
                {
                    neg = v;
                    dis[v] = uc+vc;
                    flag = 1;
                    break;
                }


            }
            if(flag==1)break;

        }
    }

}

void bfs(int u)
{
    int i,j,v;
    u = neg;

    queue<int>q;
    q.push(u);
    j = 0;
    while(!q.empty())
    {
        j++;
        if(j==60000)break;

        u = q.front();
        visited[u] = 1;
        if(u==n)
        {
            flag2 = 1;
            return;
        }
        q.pop();

        for(i = 0; i<G[u].size(); i++)
        {
            v = G[u][i];
            if(visited[v]==0)
            {
                q.push(v);
            }
        }


    }

}


int main()
{
    //freopen("output.txt","w",stdout);

    int m,a,b,i,j,x,y,c;

    while(scanf("%d",&n))
    {
        if(n==-1)break;


        zero(n);

        for(i=1; i<=n; i++)
        {

            scanf("%d %d",&c,&m);

            cost[i] = c;

            for(j=1; j<=m; j++)
            {

                scanf("%d",&b);
                G[i].push_back(b);
            }

        }
        flag = 0;
        flag2 = 0;
        neg = 0;
        int x = 0;

        bellmanFord();

        if(dis[n]>0)
        {
            printf("winnable\n");
            x = 1;
        }
        else
        {


            if(flag==1)
            {
               // printf("neg = %d %d\n\n",neg,n);
                bfs(neg);
                if(flag2==1)
                {
                    printf("winnable\n");
                    x = 1;

                }
            }

        }
        if(x==0)
        {
            printf("hopeless\n");
        }
    }
    return 0;
}
