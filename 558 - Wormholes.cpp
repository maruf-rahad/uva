#include<bits/stdc++.h>
using namespace std;
vector<int>G[1020];
int dis[1010];
int cost[1020][1020];
int flag = 0;
int n;
void zero()
{
    int i,j;
    for(i=0;i<=n+2;i++)
    {
        G[i].clear();
        dis[i] = 99999999;
        for(j=0;j<=n+2;j++)
        {
            cost[i][j] = 99999999;
        }
    }
}

void Bellman_Ford(int s)
{
    int i,j,k,u,uc,v,uvc;
    dis[s] = 0;

    for(i = 0 ;i< n-1;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<G[j].size();k++)
            {
                u = j;
                uc = dis[u];
                v = G[u][k];

                uvc = cost[u][v];

                if(uc+uvc<dis[v])
                {
                    dis[v] = uc+uvc;
                }

            }
        }
    }
    flag = 0;
    for(j=0;j<n;j++)
        {
            for(k=0;k<G[j].size();k++)
            {
                u = j;
                uc = dis[u];
                v = G[u][k];

                uvc = cost[u][v];

                if(uc+uvc<dis[v])
                {
                    flag = 1;
                    break;
                }

            }
            if(flag==1)break;
        }



}
int main()
{
    int a,b,i,j,x,y,t,m;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d",&n,&m);

        zero();

        for(i=1;i<=m;i++)
        {
            scanf("%d %d %d",&a,&b,&x);
            G[a].push_back(b);
            cost[a][b] = x;

        }
        flag = 0;
        Bellman_Ford(0);

        if(flag == 0)
        {
            printf("not possible\n");
        }
        else{
            printf("possible\n");
        }
    }











return 0;
}
