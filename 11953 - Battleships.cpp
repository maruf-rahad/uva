#include<bits/stdc++.h>
using namespace std;
int n;
int visited[110][110];
char G[110][110];

int r[4] = {0,0,1,-1};
int c[4] = {1,-1,0,0};

void zero()
{
    for(int i = 0;i<=n+1;i++)
    {
        for(int j=0;j<=n;j++)
        {
        visited[i][j] = 0;
        }

    }
}

void dfs(int x,int y)
{
    visited[x][y] = 1;

    for(int i = 0;i<4;i++)
    {
        int xx = x+r[i];
        int yy = y+c[i];

        if(visited[xx][yy]==0&&(G[xx][yy]=='x'||G[xx][yy]=='@'))
        {
            dfs(xx,yy);
        }
    }

}
int main()
{
    int t,a,b,i,j,x,y,k=0;

    scanf("%d",&t);


    while(t--)
    {
        scanf("%d",&n);
        getchar();
        zero();
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                scanf("%c",&G[i][j]);
            }
            getchar();
        }
        int sum = 0;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(visited[i][j]==0&&G[i][j]=='x')
                {
                    sum++;
                    dfs(i,j);
                }
            }
        }

        printf("Case %d: %d\n",++k,sum);


    }








return 0;
}
