#include<bits/stdc++.h>
using namespace std;
vector< int >G[120];
vector< int >v;
int ara[100000];
int visited[120];
void zero(int x)
{
    int i;
    for(i=0;i<=x;i++)
    {
        visited[i] = 0;
    }
}
void vzero(int x)
{
    for(int i=0;i<=x;i++)
    {
        G[i].clear();
    }
}

void dfs(int u)
{
    for(int i=0;i<G[u].size();i++)
    {
       int v = G[u][i];

        if(!visited[v])
        {
            visited[v] = 1;

            dfs(v);
        }
    }
    return ;
}
int main()
{
    //freopen("input.txt","w",stdout);
    int n,a,b,i,j,x,y;

    while(scanf("%d",&n)==1 && n>0)
    {
       zero(n);
       vzero(n);
       while(scanf("%d",&a)==1 && a>0)
       {
           while(scanf("%d",&b)==1 && b>0)
           {
               G[a].push_back(b);
           }
       }
       scanf("%d",&a);
       v.clear();
       for(i=0;i<a;i++)
       {
           scanf("%d",&b);
           v.push_back(b);
       }
       for(i=0;i<v.size();i++)
       {
           dfs(v[i]);
           int sum = 0;
           for(j=1;j<=n;j++)
           {
               if(!visited[j])
               {
                   sum++;
               }
           }
           printf("%d",sum);
            for(j=1;j<=n;j++)
           {
               if(!visited[j])
                   printf(" %d",j);

           }
           printf("\n");
           zero(n);

       }

    }

return 0;
}
