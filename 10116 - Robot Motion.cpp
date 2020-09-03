#include<bits/stdc++.h>
using namespace std;
char ch[100][1010];
int visited[1010][1010];
int cnt[1010][1010];
int flag = 0,flag2=0;
int a,n,m;

void dfs(int x,int y)
{
   // printf("%d %d\n",x,y);
    if(flag == 1||flag2==1)return;

    visited[x][y] = 1;

    int xx,yy;
    if(ch[x][y]=='W')
    {
        xx = x;
        yy = y-1;
    }
    else if(ch[x][y]=='E')
    {
        xx = x;
        yy = y+1;
    }
    else if(ch[x][y]=='S')
    {
        xx = x+1;
        yy = y;
    }
    else
    {
        xx = x-1;
        yy = y;
    }

    if(xx<1||xx>n||yy<1||yy>m)
    {

        flag = 1;
        a = cnt[x][y];
        return ;
    }
    else if(cnt[xx][yy]==999999)
    {
        flag2 = 1;
        return;
    }
    else if(visited[xx][yy]==1)
    {
        cnt[xx][yy] = 999999;
        dfs(xx,yy);
    }

    if(visited[xx][yy]==0)
    {
        cnt[xx][yy] = cnt[x][y]+1;
        dfs(xx,yy);
    }


}




int main()
{
   // freopen("input.txt","w",stdout);
    int s,b,i,j,x,y;
    char str;

    while(scanf("%d %d %d",&n,&m,&s)==3)
    {
        scanf("%c",&str);
        if(n==0&&m==0&&s==0)break;

        flag = 0;
        flag2 = 0;

        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                visited[i][j] = 0;
                cnt[i][j] = 0;
            }
        }

        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                scanf("%c",&ch[i][j]);
            }
            scanf("%c",&str);
        }

      //  printf("s == %d\n",s);
        cnt[1][s] = 1;

        dfs(1,s);
        int ma = -99;
        int sum = 0;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                if(cnt[i][j]!=999999&&cnt[i][j]>ma)
                    ma = cnt[i][j];

                if(cnt[i][j]==999999)sum++;
            }

        }
        /*for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                printf("%d      ",cnt[i][j]);
            }
            printf("\n");
        }*/

        if(ma<0)ma = 0;


        if(flag==1)
        {
            printf("%d step(s) to exit\n",a);
        }else if(flag2==1)
        {
            printf("%d step(s) before a loop of %d step(s)\n",ma,sum);
        }




    }









    return 0;
}
