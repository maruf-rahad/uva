#include<bits/stdc++.h>
using namespace std;
vector<int> G[120];
int cost[120][120];
int ac[120];

void zero(int n)
{
    for(int i = 0;i<=n+2;i++)
    {
        G[i].clear();
        ac[i] = 99999999;

        for(int j = 0;j<=n+2;j++)
        {
            cost[i][j] = 99999999;
        }
    }

}

void dijkstra(int s)
{

    priority_queue< pair <int ,int> >pq;

    ac[s] = 0;

    pq.push({-0,-s});
    ac[s] = 0;

    while(!pq.empty())
    {
        int u = -pq.top().second;
        int c = -pq.top().first;

       // printf("u = %d %d\n",u,c);

        pq.pop();

        for(int i=0;i<G[u].size();i++)
        {
            int v = G[u][i];
            int  w = cost[u][v];

           if(c+w<ac[v])
           {
               ac[v] = c+w;
               pq.push({-ac[v],-v});
           }

        }




    }
}

int main()
{
   // freopen("output.txt","w",stdout);
    int n,m,a,b,i,j,x,y,t,d,s,z;

    scanf("%d",&z);
    getchar();
    while(z--)
    {
        scanf("%d %d %d %d\n",&n,&d,&t,&m);
        zero(n);
        for(i=1;i<=m;i++)
        {
            scanf("%d %d %d",&a,&b,&x);
            G[b].push_back(a);
            cost[b][a] = x;
        }

        dijkstra(d);
        int mx = -99,sum=0;

        for(i=1;i<=n;i++)
        {
           if(ac[i]<=t)
           {
               sum+=1;
           }
        }



        printf("%d\n",sum);
        if(z)
        {
            printf("\n");
        }
    }











    return 0;
}
