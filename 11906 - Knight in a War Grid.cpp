#include<bits/stdc++.h>
using namespace std;
int g[120][120];
int visited[120][120];
int ara[2];
int ara2[2];
int n,m,a,b;
void dfs(int x,int y)
{
    int i,j;
    visited[0][0] = 1;

    int sum = 0;

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            int p = x + ara[i];
            int q = y + ara2[j];
             printf("%d %d\n",p,q);
            if(p<n&&p>=0&p<m&&q<n&&q<m&&q>=0&&g[p][q]!=5555555)
            {
                sum++;
            }

         }

    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            int p = x + ara2[i];
            int q = y + ara[j];
             printf("%d %d\n",p,q);
            if(p<n&&p>=0&p<m&&q<n&&q<m&&q>=0&&g[p][q]!=5555555)
            {
                sum++;
            }

         }

    }

    g[x][y] = sum;
    visited[x][y] = 1;





    /*for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            int xx = x + ara[i];
            int yy = y + ara2[j];
            if(visited[xx][yy]==0&&g[xx][yy]!=5555555)
                dfs(xx,yy);
         }

    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            int xx = x + ara2[i];
            int yy = y + ara[j];
            if(visited[xx][yy]==0&&g[xx][yy]!=5555555)
                dfs(xx,yy);
         }

    }
    */
    return ;
}
int main()
{

    int t,i,j,w,c,d;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d %d",&n,&m,&a,&b);
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=m;j++)
            {
                g[i][j] = 0;
                visited[i][j] = 0;
            }
        }
        scanf("%d",&w);
        for(i=1;i<=w;i++)
        {
            scanf("%d %d",&c,&d);
            g[c][d] = 5555555;
        }
        ara[0] = a;
        ara[1] = -a;
        ara2[0] = b;
        ara2[1] = -b;

        dfs(0,0);

        for(i=0;i<m;i++)
        {
            for(j=0;j<=m;j++)
            {
                printf("%d ",g[i][j]);
            }
            printf("\n");
        }


    }


    return 0;
}
