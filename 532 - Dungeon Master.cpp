#include<bits/stdc++.h>
using namespace std;
int n,m,l;
char ch[32][32][32];
int cnt[32][32][32];
int visited[32][32][32];
int r[4] = {0,0,1,-1};
int cc[4] = {1,-1,0,0};
int flag = 0;

void zero()
{
    int i,j,k;
    for(i=1;i<=l;i++)
    {
        for(j=1;j<=n;j++)
        {
            for(k=1;k<=m;k++)
            {
                visited[i][j][k] = 0;
                cnt[i][j][k] = 0;
            }
        }
    }
}
void bfs(int a,int b,int c)
{
    int i,j,k,x,y,z,xx;
    visited[a][b][c] = 1;
    queue<pair<int,pair<int,int> > >q;
    q.push({a,{b,c}});
    while(!q.empty())
    {
        x = q.front().first;
        y = q.front().second.first;
        z = q.front().second.second;
       // printf("now %d %d %d\n\n",x,y,z);
       // printf("count = %d\n",cnt[x][y][z]);
        //getchar();

        q.pop();
        visited[a][b][c] = 1;
        xx = x+1;
        if(xx<=l)
        {
            if(ch[xx][y][z]=='E')
            {
                printf("Escaped in %d minute(s).\n",cnt[x][y][z]+1);
                flag = 1;
                return;
            }
            if(visited[xx][y][z]==0&&ch[xx][y][z]=='.')
            {
               // printf("inserting %d %d %d\n",xx,y,z);
                visited[xx][y][z] = 1;
                cnt[xx][y][z] = cnt[x][y][z]+1;
                q.push({xx,{y,z}});
            }
        }
        xx = x-1;
        if(xx>=1)
        {
            if(ch[xx][y][z]=='E')
            {
                printf("Escaped in %d minute(s).\n",cnt[x][y][z]+1);
                flag = 1;
                return;
            }
            if(visited[xx][y][z]==0&&ch[xx][y][z]=='.')
            {
                visited[xx][y][z] = 1;
                //printf("inserting %d %d %d\n",xx,y,z);
                cnt[xx][y][z] = cnt[x][y][z]+1;
                q.push({xx,{y,z}});
            }
        }

        for(i=0;i<4;i++)
        {
            int yy = y+r[i];
            int zz = z+cc[i];
            if(yy>=1&&yy<=n&&zz>=1&&zz<=m&&visited[x][yy][zz]==0&&ch[x][yy][zz]=='E')
            {
                printf("Escaped in %d minute(s).\n",cnt[x][y][z]+1);
                flag = 1;
                return ;
            }

            if(yy>=1&&yy<=n&&zz>=1&&zz<=m&&visited[x][yy][zz]==0&&ch[x][yy][zz]=='.')
            {
              //  printf("inserting %d %d %d\n",x,yy,zz);
                visited[x][yy][zz] = 1;
                cnt[x][yy][zz] = cnt[x][y][z]+1;
                q.push({x,{yy,zz}});
            }
        }

    }


}
int main()
{
    int a,b,c,i,j,x,y,z,k;
    char ah;
    while(scanf("%d %d %d",&l,&n,&m)==3)
    {
        if(l==0&&n==0&&m==0)break;
        getchar();
        zero();
        for(i=1; i<=l; i++)
        {
            for(j=1; j<=n; j++)
            {
                for(k=1; k<=m; k++)
                {
                    scanf("%c",&ch[i][j][k]);
                    x = ch[i][j][k];
                    if(x=='S')
                    {
                        a = i;
                        b = j;
                        c = k;
                    }
                }
                getchar();
            }
            getchar();
        }

        //printf("inserting %d %d %d\n",a,b,c);
        flag = 0;
        bfs(a,b,c);

        if(flag==0)
        {
            printf("Trapped!\n");
        }

    }
    return 0;
}
