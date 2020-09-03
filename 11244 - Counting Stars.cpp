#include<bits/stdc++.h>
using namespace std;
#define ll long long
char ch[150][150];
int visited[150][150];
int sum,n,m;
set<int>st;
set<char> :: iterator it;
vector<int>v;
int row[8] = {0,0,1,-1,-1,-1,1,1};
int col[8] = {1,-1,0,0,1,-1,1,-1};

void zero(int n,int m)
{
    int i,j;
    for(i=0;i<=n+5;i++)
    {
        for(j=0;j<=m+5;j++)
        {
            visited[i][j] = 0;
        }
    }
}
void dfs(int x,int y)
{
    visited[x][y] = 1;
    sum++;
    for(int i=0;i<8;i++)
    {
        int xx = x+row[i];
        int yy = y+col[i];
        if(xx>=1&&xx<=n&&yy>=1&&yy<=m&&visited[xx][yy]==0&&ch[xx][yy]=='*')
        {
            dfs(xx,yy);
        }
    }
}

int main()
{
    int a,b,c,d,i,j,x,y;
    int t,k=0;
        string s;
    while(scanf("%d %d",&n,&m)==2)
    {
        if(n==0&&m==0)break;
        zero(n,m);
        getchar();
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                scanf("%c",&ch[i][j]);
            }
            getchar();
        }
        x = 0;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(ch[i][j]=='*'&&visited[i][j]==0)
                {
                    sum =  0;
                    dfs(i,j);

                    if(sum==1)
                    {
                        x+=1;
                    }
                }
            }
        }
        printf("%d\n",x);

    }












return 0;
}
