#include<bits/stdc++.h>
using namespace std;
char G[30][30];
int visited[30][30];
int cnt[30][30];
int r[4] = {0,0,1,-1};
int c[4] = {1,-1,0,0};
int n,m,sum;
char str;
void zero()
{
    for(int i=0; i<=n+1; i++)
    {
        for(int j=0; j<=m+1; j++)
        {
            visited[i][j] = 0;
            cnt[i][j] = 0;
        }
    }
}
void dfs(int x, int y)
{
    int i;
    visited[x][y] = 1;

    for(i=0; i<4; i++)
    {
        int xx = x+r[i];
        int yy = y+c[i];



        if(xx>=0&&xx<n&&yy>=0&&yy<m&&visited[xx][yy]==0&&G[xx][yy]==str)
        {
            dfs(xx,yy);
        }
        else if(xx>=0&&xx<n&&yy==m)
        {
            yy = 0;

            if(visited[xx][yy]==0&&G[xx][yy]==str)
            {

                dfs(xx,yy);
            }
        }
        else if(xx>=0&&xx<n&&yy==-1)
        {
            yy = m-1;

            if(visited[xx][yy]==0&&G[xx][yy]==str)
            {

                dfs(xx,yy);
            }
        }

    }




}
void dfs2(int x, int y)
{
    int i;
     sum++;
    visited[x][y] = 1;

    //printf("%d %d %d\n",x,y,sum);


    for(i=0; i<4; i++)
    {
        int xx = x+r[i];
        int yy = y+c[i];
         // printf("xx = %d yy = %d  visited %d   g = %c\n",xx,yy,visited[xx][yy],G[xx][yy]);

        if(xx>=0&&xx<n&&yy>=0&&yy<m&&visited[xx][yy]==0&&G[xx][yy]==str)
        {
         // printf("yes1 %d %d\n",xx,yy);
            dfs2(xx,yy);
        }
        else if(xx>=0&&xx<n&&yy==m)
        {

            yy = 0;
            if(visited[xx][yy]==0&&G[xx][yy]==str)
            {
                // printf("yes2 %d %d\n",xx,yy);
                dfs2(xx,yy);
            }
        }
        else if(xx>=0&&xx<n&&yy==-1)
        {
            yy = m-1;
            if(visited[xx][yy]==0&&G[xx][yy]==str)
            {
                //printf("yes3 %d %d\n",xx,yy);
                dfs2(xx,yy);
            }
        }

    }




}

int main()
{
  //freopen("output.txt","w",stdout);
    int a,b,i,j,x,y,total;


    while(scanf("%d %d",&n,&m)==2)
    {
        getchar();
        zero();
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                scanf("%c",&G[i][j]);
            }
            getchar();
        }
        scanf("%d %d",&a,&b);
        getchar();
        getchar();
        str = G[a][b];

        dfs(a,b);

          // cout<<endl<<endl;

        sum = 0;
        total = -99;

        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(visited[i][j]==0&&G[i][j]==str)
                {
                    sum = 0;
                   //printf("calling from main %d %d\n",i,j);

                    dfs2(i,j);
                  //  printf("sum = %d\n");
                }

                if(sum>total)
                {
                    total = sum;
                }
            }
        }

        printf("%d\n",total);



    }









    return 0;
}
