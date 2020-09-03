#include<bits/stdc++.h>
using namespace std;
vector<int>G[1111];
vector<pair<int,int> >ans;
int visited[1111];
int low[1111];
int d[1111];
int parent[1111];
int mark[1111][1111];
int arti[1111][1111];
int tim;

void zero()
{
    tim = 0;
    ans.clear();
    for(int i = 0;i<=1100;i++)
    {
        G[i].clear();
        visited[i] = 0;
        d[i] = 0;
        parent[i] = i;
        low[i] = 0;
        for(int j=0;j<=1100;j++)
        {
            mark[i][j] = 0;
            arti[i][j] = 0;
        }
    }

}
void articulation(int u)
{
   // printf("in %d\n",u);
    tim++;
    visited[u] = 1;
    d[u] = tim;
    low[u] = tim;

    for(int i = 0;i<G[u].size();i++)
    {
        int v = G[u][i];


        if(v==parent[u])continue;
        if(visited[v]==1)
        {
            if(mark[u][v]==0)
            {
              //  printf("visit %d %d\n",u,v);
                ans.push_back(make_pair(u,v));
                mark[u][v] = 1;
                mark[v][u] = 1;
                arti[u][v] = 1;
            }
            low[u] = min(low[u],d[v]);
        }
        if(visited[v]==0)
        {
            if(mark[u][v]==0&&mark[v][u]==0)
            {
               // printf("visiting %d %d\n",u,v);
                mark[u][v] = 1;
                mark[v][u] = 1;
                arti[u][v] = 1;
                ans.push_back(make_pair(u,v));
            }
            parent[v] = u;
         //   printf("going %d\n",v);
            articulation(v);
            low[u] = min(low[u],low[v]);
            if(d[u]<low[v])
            {
               // printf("yess %d %d\n",u,v);
                if(arti[u][v]==0)
                {
                    mark[u][v] = 1;
                    mark[v][u] = 1;
                    arti[u][v] = 1;
                    ans.push_back(make_pair(u,v));
                }
                else
                {
                    mark[u][v] = 1;
                    mark[v][u] = 1;
                    arti[u][v] = 1;
                    ans.push_back(make_pair(v,u));
                }
            }
        }
    }

}
int main()
{
    int n,m,a,b,i,j,x,y,sum,flag,k=0;

    while(scanf("%d %d",&n,&m)==2)
    {
        if(n==0&&m==0)break;

        zero();

        for(i=1;i<=m;i++)
        {
            scanf("%d %d",&a,&b);
            G[a].push_back(b);
            G[b].push_back(a);
        }


    /*for(i=1;i<=n;i++)
    {
        printf("%d : ",i);
        for(j=0;j<G[i].size();j++)
        {
            printf("%d ",G[i][j]);
        }
        printf("\n");
    }*/

    articulation(1);

    printf("%d\n\n",++k);

   // printf("\n\n");


        for(i=0;i<ans.size();i++)
        {
            printf("%d %d\n",ans[i].first,ans[i].second);
        }

        printf("#\n");





    }










return 0;
}
