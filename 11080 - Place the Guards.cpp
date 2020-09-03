#include<bits/stdc++.h>
using namespace std;
vector<int>v[250];
int visited[250];
int visited2[250];
int cnt[250];
int flag,flag2,sum,sum2;

void zero(int n)
{
    for(int i=0; i<=n+2; i++)
    {
        v[i].clear();
        visited[i] = 0;
        cnt[i] = 0;
        visited2[i] = 0;
    }

}

void bfs(int u)
{

    visited[u] = 1;
    queue<int>q;

    q.push(u);

    while(!q.empty())
    {
        u = q.front();
        q.pop();

        for(int i=0; i<v[u].size(); i++)
        {
            int a = v[u][i];

            if(visited[u]==1&&visited[a]==0)
            {
                visited[a] = 2;
                q.push(a);
            }
            else if(visited[u]==2&&visited[a]==0)
            {
                visited[a] = 1;
                q.push(a);
            }
            else if(visited[u]==visited[a]){

                flag = 1;
                return;
            }


        }

    }

}

void dfs(int u)
{
    int i,a;

    visited2[u] = 1;

    if(visited[u]==1)
        sum++;
    else
        sum2++;



    for(i=0;i<v[u].size();i++)
    {
        a = v[u][i];

        if(visited2[a]==0)
        {
            dfs(a);
        }
    }
}

int main()
{
   //freopen("output.txt","w",stdout);
    int a,b,i,j,t,n,m;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);

        zero(n);

        for(i=1; i<=m; i++)
        {
            scanf("%d %d",&a,&b);
            v[a].push_back(b);
            v[b].push_back(a);
        }

        flag = 0;
        int x = 0;

        for(i=0;i<n;i++)
        {
            if(v[i].size()==0)
            {
                visited[i] = 1;
                cnt[i]=-1;
                x++;
            }
        }

        for(i=0; i<n; i++)
        {
            if(visited[i]==0&&cnt[i]!=-1)
            {
                visited[i] = 1;
                bfs(i);
                if(flag==1)
                {
                    break;
                }
                else{
                    sum = 0;
                    sum2 = 0;
                    dfs(i);
                    x+=min(sum,sum2);


                }
            }

        }

     //   printf("%d %d %d %d\n",sum,flag,sum2,flag2);

     if(flag==0)
     {
         printf("%d\n",x);
     }
     else{
        printf("-1\n");
     }






    }







    return 0;
}
