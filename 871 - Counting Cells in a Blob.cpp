#include<bits/stdc++.h>
using namespace std;

int r[8] = {0,0,1,-1,-1,-1,1,1};
int c[8] = {1,-1,0,0,1,-1,-1,1};
char ch[30][30];
int visited[30][30],sum;

void zero()
{
    int i,j;
    for(i=0;i<30;i++)
    {
        for(j=0;j<30;j++)
        {
            visited[i][j] = 0;
        }
    }
}

void dfs(int x,int y,int n,int m)
{
    sum++;
    visited[x][y] = 1;

    for(int i=0;i<8;i++)
    {
        int xx = x + r[i];
        int yy = y + c[i];

        if(xx>=1&&xx<n&&yy>=0&&yy<m&&visited[xx][yy]==0&&ch[xx][yy]=='1')
        {
            dfs(xx,yy,n,m);
        }
    }
}
int main()
{

    int t,a,b=0,i,j,k,m;

    scanf("%d",&t);
    getchar();
    getchar();
    while(t--)
    {
        i = 1;
        while(gets(ch[i]))
        {
            if(strlen(ch[i])==0)break;
            m = strlen(ch[i]);
            i++;
        }
        zero();
        int  mx = -1;
        sum = 0;
        for(j=1;j<=i;j++)
        {
            for(k=0;k<m;k++)
            {
                if(visited[j][k]==0&&ch[j][k]=='1')
                {
                    sum = 0;
                    dfs(j,k,i,m);
                    mx = max(mx,sum);
                }
            }
        }
        mx = max(mx,sum);
        if(b>0)
            printf("\n");
        printf("%d\n",mx);
        b++;




    }













return 0;
}
