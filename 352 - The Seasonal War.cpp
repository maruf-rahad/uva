#include<bits/stdc++.h>
using namespace std;
char G[100][100];
int visited[100][100];
int r[8] = {0,0,1,-1,1,1,-1,-1};
int c[8] = {1,-1,0,0,1,-1,1,-1};

int n;

void zero()
{
    for(int i=0;i<=n+1;i++)
    {
        for(int j=0;j<=n+1;j++)
        {
            visited[i][j] = 0;
            G[i][j] = 0;
        }
    }
}

void dfs(int x, int y)
{
    int i;
    visited[x][y] = 1;
    for(i=0;i<8;i++)
    {
        int xx = x+r[i];
        int yy = y+c[i];

        if(xx>=1&&xx<=n&&yy>=1&&yy<=n&&visited[xx][yy]==0&&G[xx][yy]=='1')
        {
            dfs(xx,yy);
        }
    }

}
int main()
{
    int a,b,i,j,x,y,sum = 0,k=0;

    while(scanf("%d",&n)==1)
    {
        zero();
        getchar();
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                scanf("%c",&G[i][j]);
            }
            getchar();
        }
        sum = 0;

        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(visited[i][j]==0&&G[i][j]=='1')
                {
                    sum++;
                    dfs(i,j);
                }
            }
        }

        printf("Image number %d contains %d war eagles.\n",++k,sum);
    }













return 0;
}
