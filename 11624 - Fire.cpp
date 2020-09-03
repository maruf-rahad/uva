#include<bits/stdc++.h>
using namespace std;
int n,m;
char ch[1005][1005];
int cnt[1005][1005];
int visited[1005][1005];
queue<pair<int,int> >qf;
int r[4] = {0,0,1,-1};
int c[4] = {1,-1,0,0};
int flag;

void zero()
{
    int i,j;
    for(i=0;i<=n+2;i++)
    {
        for(j=0;j<=m+2;j++)
        {
            cnt[i][j] = 0;
            visited[i][j] = 0;
        }
    }
    while(!qf.empty())
    {
        qf.pop();
    }
}

void bfs(int x,int y)
{
    int xx,yy,a,b,i,j;
    visited[x][y] = 1;
    queue<pair<int,int> >q;

    q.push({x,y});
    while(1)
    {
        if(q.empty())
        {
          //  printf("empty\n");
            return;
        }
        vector<pair<int,int> >v;
        v.clear();

        while(!q.empty())
        {
             x = q.front().first;
             y = q.front().second;
             q.pop();
             //printf("now %d %d\n",x,y);
             if(visited[x][y]==2)continue;
             visited[x][y] = 2;
             for(i=0;i<4;i++)
             {

                 int xx = x+r[i];
                 int yy = y+c[i];
                    //  printf("%d %d\n",xx,yy);
                 if(xx<=0||xx>n||yy<=0||yy>m)
                 {
                    printf("%d\n",cnt[x][y]+1);
                     flag = 1;
                     return;

                 }
                 if(xx>=1&&xx<=n&&yy>=1&&yy<=m&&visited[xx][yy]==0&&ch[xx][yy]=='.')
                 {
               //     printf("inserting %d %d\n",xx,yy);
                     cnt[xx][yy] = cnt[x][y]+1;
                     visited[xx][yy] = 1;
                     v.push_back({xx,yy});
                 }
             }

        }
        while(!v.empty())
        {
            x = v.back().first;
            y = v.back().second;
           // printf("pushing %d %d\n",x,y);
            q.push({x,y});
            v.pop_back();
        }

        while(!qf.empty())
        {
            int a = qf.front().first;
            int b = qf.front().second;
           // printf("now genjam %d %d\n",a,b);
            qf.pop();

            for(i=0;i<4;i++)
            {
                int xx = a+r[i];
                int yy = b+c[i];
                if(xx>=1&&xx<=n&&yy>=1&&yy<=m&&visited[x][y]!=2&&ch[xx][yy]=='.')
                {
              //      printf("genjam %d %d\n",xx,yy);
                    visited[xx][yy] = 2;
                    v.push_back({xx,yy});
                }
            }

        }
        while(!v.empty())
        {
            xx = v.back().first;
            yy = v.back().second;
            v.pop_back();
          //  printf("pushing genjam %d %d\n",xx,yy);
            qf.push({xx,yy});
        }
    }

}


int main()
{
   // freopen("output.txt","w",stdout);
    int t,a,b,i,j,x,y;
    scanf("%d",&t);
    getchar();

    while(t--)
    {
        scanf("%d %d",&n,&m);
        zero();

        getchar();
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                scanf("%c",&ch[i][j]);
                if(ch[i][j]=='F')
                {
                  //  printf("%d %d\n",i,j);
                    qf.push({i,j});
                }
                if(ch[i][j]=='J')
                {
                    a = i;
                    b = j;
                }
            }
            getchar();
        }
        flag = 0;
        bfs(a,b);
        if(flag==0)
        {
            printf("IMPOSSIBLE\n");
        }

    }

return 0;
}
