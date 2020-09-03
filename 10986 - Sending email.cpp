#include<bits/stdc++.h>
using namespace std;
vector<int>G[20005];
int w[20005][20005];
int dist[20005];

void zero(int n)
{
    int i,j;
    for(i=0; i<=n; i++)
    {
        dist[i] = 99999999;
        G[i].clear();

        for(j=0; j<=n; j++)
        {
            w[i][j] = 99999999;
        }
    }
}

void dikjstra(int u,int des)
{
    //printf("u = %d \n",u);

    dist[u] = 0;
    int i;

    priority_queue< pair<int, int> >pq;

    pq.push({-0,-u});

    while(!pq.empty())
    {
        u = -pq.top().second;
        int wu = -pq.top().first;

        //printf("u = %d  wu = %d\n",u,wu);

        pq.pop();

        for(int i = 0; i < (int)G[u].size(); ++i)
        {
            int v = G[u][i];


            int wv = w[u][v];

            // printf("v = %d wv = %d\n",v,wv);
            if(wu+wv<dist[v])
            {
                dist[v] = wu+wv;
                pq.push({-dist[v],-v});
            }
        }



    }


}
int main()
{
    int a,b,i,j,x,y,c,d,n,m,k=0,t;

    scanf("%d",&t);

    while(t--)
    {

        scanf("%d %d %d %d",&n,&m,&x,&y);

        zero(n);
        for(i=1; i<=m; i++)
    {
        scanf("%d %d %d",&a,&b,&c);
            G[a].push_back(b);
            G[b].push_back(a);
            w[a][b] = c;
            w[b][a] = c;



        }


        dikjstra(x,y);
        if(dist[y]!=99999999)
            printf("Case #%d: %d\n",++k,dist[y]);
            else
            {
                printf("Case #%d: unreachable\n",++k);
            }




    }












    return 0;
}
