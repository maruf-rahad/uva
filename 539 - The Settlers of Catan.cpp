#include<bits/stdc++.h>
using namespace std;
int visited[30][30],n,m,mx;
vector<int>v[30];

void zero(int n)
{
    for(int i = 0; i<=n+2; i++)
    {
        v[i].clear();

        for(int j = 0; j<=n+2; j++)
        {
            visited[i][j] = 0;
        }
    }
}

void zero2(int x)
{
    for(int i = 0;i<=x;i++)
    {
        for(int j = 0;j<=x;j++)
        {
            visited[i][j] = 0;
        }
    }
}

void recur(int u,int sum)
{
    //printf("asi %d  %d\n",u,sum);
    if(sum>mx)
    {
        mx = sum;
        // printf("%d\n",mx);
    }
    for(int i = 0; i<v[u].size(); i++)
    {
        int a = v[u][i];

        if(visited[u][a]==0&&visited[a][u]==0)
        {
            visited[u][a] = 1;
            visited[a][u] = 1;
            //printf("jaitasi %d\n",a);
            recur(a,sum+1);
           // printf("back to %d  %d\n",u,sum);
            visited[u][a] = 0;
            visited[a][u] = 0;
            // printf("returning %d %d\n",a,sum);
        }
    }


}
int main()
{
    int a,b,i,j,x,y,total;

    while(scanf("%d %d",&n,&m)==2)
    {
        if(n==0&&m==0)break;
        zero(n);
        total = 0;
        for(i=1; i<=m; i++)
        {
            scanf("%d %d",&a,&b);
            v[a].push_back(b);
            v[b].push_back(a);
        }
        for(i=0; i<n; i++)
        {
            zero2(n+2);
            mx = 0;
            recur(i,0);

            if(mx>total)
            {
                total = mx;
            }
        }
        printf("%d\n",total);


    }










    return 0;
}
