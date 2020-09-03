#include<bits/stdc++.h>
using namespace std;
int dr[4] = {-1,0,1,0};
int dc[4] = {0,1,0,-1};
int n,m;
int ara[1000][1000];
int visited[1000][1000];
int cnt[1000][1000];
void zero(int n, int m)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            visited[i][j] = 0;
            cnt[i][j] = 0;
        }
    }
}
int dikjstra(int x,int a,int b)
{
    cnt[a][b] = x;


    priority_queue< pair< int, pair<int,int> > >pq;


    pq.push({-x,{-a,-b}});

    while(!pq.empty())
    {


    int u = -pq.top().first;
    int x = -pq.top().second.first;
    int y = -pq.top().second.second;

     visited[x][y] = 1;

    if(x==n&&y==m)
    {
        return u;
    }

    pq.pop();

   //  printf("%d %d %d\n",u,x,y);

    for(int i=0;i<4;i++)
    {
       int  r = x+dr[i];
        int c = y+dc[i];

      //  printf("r = %d n = %d c = %d m = %d\n",r,n,c,m);
        if((r>=1&&r<=n)&&(c>=1&&c<=m)&&visited[r][c]==0)
        {
           // printf("yes r = %d c = %d\n",r,c);
           visited[r][c] = 1;
            cnt[r][c] = u+ara[r][c];

            pq.push({-cnt[r][c],{-r,-c}});
        }
    }


    }

}
int main()
{
    int a,b,i,j,x,y,t;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d",&n,&m);

        zero(n,m);

        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                scanf("%d",&ara[i][j]);
            }
        }

        int x = ara[1][1];
        a  = dikjstra(x,1,1);
        printf("%d\n",a);
    }









return 0;
}
