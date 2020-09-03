#include<bits/stdc++.h>
using namespace std;
int visited[15][15];
int cnt[15][15];
int r[8] = {2,2,-2,-2,1,-1,1,-1};
int c[8] = {1,-1,1,-1,2,2,-2,-2};
char str1,str2;

void zero()
{
    int i,j;

    for(i=0; i<=10; i++)
    {
        for(j=0; j<=10; j++)
        {
            visited[i][j] = 0;
            cnt[i][j] = 0;
        }
    }


}

void bfs(int n,int m,int a,int b)
{
    int i,xx,yy;
    visited[n][m] = 1;
    cnt[n][m] = 0;

    queue<pair<int,int>  >q;

    q.push(make_pair(n,m));

    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
       // printf("now   %d %d\n",x,y);

        if(x==a&&y==b)
        {
            printf("To get from %c%d to %c%d takes %d knight moves.\n",str1,n,str2,a,cnt[x][y]);
            return ;
        }

        for(i=0; i<8; i++)
        {
            xx = x + r[i];
            yy = y + c[i];
            if(xx>=1&&xx<=8&&yy>=1&&yy<=8&&visited[xx][yy]==0)
            {
              //  printf("pushing   %d %d\n",xx,yy);
                q.push(make_pair(xx,yy));
                visited[xx][yy] = 1;
                cnt[xx][yy] = cnt[x][y]+1;
            }
        }


    }


}
int main()
{

    int n,m,a,b,i,j,x,y;
    char str;

    while(scanf("%c%d%c%c%d%c",&str1,&n,&str,&str2,&a,&str)==6)
    {
        m = str1-'a'+1;
        b = str2-'a'+1;
        zero();

        bfs(n,m,a,b);




    }









    return 0;
}
