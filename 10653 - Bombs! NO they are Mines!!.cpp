#include<bits/stdc++.h>
using namespace std;
int ara[1005][1005];
int visited[1005][1005];
int cnt[1005][1005];
int n,m;
int r[4] = {0,0,1,-1};
int c[4] = {1,-1,0,0};

void zero()
{
    for(int i=0;i<n+1;i++)
    {
        for(int j = 0;j<=m+1;j++)
        {
            visited[i][j] = 0;
            cnt[i][j] = 0;
        }
    }
}

void bfs(int a,int b,int a2,int b2)
{
    int i;

    visited[a][b] = 1;
    cnt[a][b] = 0;
    queue<pair<int,int> >q;
    q.push({a,b});

    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;

        q.pop();

        //printf("found %d %d\n",x,y);


        for(i=0;i<4;i++)
        {
            int xx = x+r[i];
            int yy = y+c[i];
            if(visited[xx][yy]==0&&xx>=0&&xx<n&&yy>=0&&yy<m)
            {
                visited[xx][yy] = 1;
                cnt[xx][yy] = cnt[x][y] + 1;

                if(xx==a2&&yy==b2)return ;

               // printf("new %d %d\n",xx,yy);

                q.push({xx,yy});
            }
        }
    }
}

int main()
{
    int a,b,i,j,x,y,a2,b2,t;

    while(scanf("%d %d",&n,&m)==2)
    {


    if(n==0&&m==0)break;

    zero();

    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&x,&y);
        while(y--)
        {
            scanf("%d",&a);
            visited[x][a] = 1 ;
        }
    }

    scanf("%d %d",&a,&b);
    scanf("%d %d",&a2,&b2);
   /* for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",visited[i][j]);
        }
        cout<<endl;
    }*/
    bfs(a,b,a2,b2);

    printf("%d\n",cnt[a2][b2]);

    }









return 0;
}
