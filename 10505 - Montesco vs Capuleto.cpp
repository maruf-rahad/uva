#include<bits/stdc++.h>
using namespace std;
vector<int>v[222];
int visited[222];
int visited2[222];
int flag,x,y;

void zero()
{
    for(int i=0; i<=211; i++)
    {
        visited[i] = 0;
        visited2[i] = 0;
        v[i].clear();
    }
}

void bipartite(int u,int n)
{
    visited[u] = 1;
    if(u<=n)
        x++;
    queue<int>q;
    q.push(u);

    while(!q.empty())
    {
        int a = q.front();
           // printf("on %d %d\n",a,visited[a]);
        q.pop();

        for(int i=0; i<v[a].size(); i++)
        {
            int b = v[a][i];
           // printf("find %d %d\n",b,visited[b]);
            if(visited[a]==visited[b])
            {
                flag = 1;
                //printf("flag\n");
            }
            else if(visited[a]==1&&visited[b]==0)
            {
                visited[b] = 2;
                if(b<=n)
                    y++;
                q.push(b);
             //   printf("pushing %d %d\n",b,visited[b]);
            }
            else if(visited[a]==2&&visited[b]==0)
            {
                visited[b] = 1;
                q.push(b);
                if(b<=n)
                    x++;
               // printf("pushing %d %d\n",b,visited[b]);
            }
        }



    }



}
int main()
{

    int t,n,m,a,b,i,j,sum;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);

        zero();

        for(i=1; i<=n; i++)
        {
            scanf("%d",&a);
            for(j=1; j<=a; j++)
            {
                scanf("%d",&b);
                v[i].push_back(b);
                v[b].push_back(i);
            }

        }
        sum = 0;
        for(i=1; i<=n; i++)
        {
            x = 0;
            y = 0;
            flag = 0;
            if(visited[i]==0)
            {
               // printf("calling from main %d\n",i);
                bipartite(i,n);
              //  printf("flag = %d x = %d y = %d\n",flag,x,y);
                if(flag==0)
                {
                    sum+=max(x,y);
                }
            }
        }

        printf("%d\n",sum);

         /*for(i=1;i<=n;i++)
         {
             printf("%d : ",i);

             for(j=0;j<v[i].size();j++)
             {
                 printf("%d ",v[i][j]);
             }
             printf("\n");
         }*/


    }















    return 0;
}
