#include<bits/stdc++.h>
using namespace std;
vector<int>v[25005];
int visited[25005];
int level[25005];
int cnt[25005];
queue<int>q;
void zero(int n)
{
    for(int i=0;i<=n;i++)
    {
        v[i].clear();
    }
}

void semi_zero(int n)
{
    for(int i=0;i<=n+1;i++)
    {
        visited[i] = 0;
        level[i] = 0;
        cnt[i] = 0;
    }
    while(!q.empty())
    {
        q.pop();
    }
}

void bfs(int a)
{
    int i,j,x,y;
    q.push(a);
    level[a] = 0;
    visited[a] = 1;
   // printf("pinic\n");

    while(!q.empty())
    {
        x = q.front();
     //  printf("pop : %d",x);
        q.pop();

        for(i=0;i<v[x].size();i++)
        {
            y = v[x][i];
            if(visited[y]==0)
            {
                q.push(y);
                visited[y] = 1;
                level[y] = level[x]+1;
            }
        }
    }





}

int main()
{
   // freopen("input.txt","w",stdout);
    int n,m,a,b,i,j,x,y,z;
    scanf("%d",&n);
    zero(n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        for(j=0;j<m;j++)
        {
            scanf("%d",&a);
            v[i].push_back(a);
        }
    }


    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        semi_zero(n);

        scanf("%d",&a);

        bfs(a);



        for(j=0;j<=n;j++)
        {
            a = level[j];
            if(a!=0)
            {
            cnt[a]++;
            }
        }



        a = *max_element(cnt,cnt+n);



        if(a==0)
        {
            printf("0\n");
        }
        else{

        for(j=0;j<n;j++)
        {
            if(cnt[j]==a)
            {
                printf("%d %d\n",a,j);
                break;
            }
        }

        }







    }







return 0;
}
