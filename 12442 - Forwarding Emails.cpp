#include<bits/stdc++.h>
using namespace std;
vector<int>v[50005];
int cnt[50005];
int visited[50005];
int sum = 0;
int sub = 0;
int flag = 0;
int flag2 = 0;

void dfs2(int a);

void zero(int n)
{
    for(int i=0;i<=n+2;i++)
    {
        v[i].clear();
        cnt[i] = 0;
        visited[i] = 0;
    }

}

void dfs(int a)
{
   // printf("in %d\n",a);
    visited[a] = 1;


    int b = v[a][0];

   // printf("b = %d    %d\n",b,cnt[b]);


    if(visited[b]==0)
    {
        //printf("calling %d\n",b);
        dfs(b);
        sum++;
        if(cnt[a]==0)
        {
            cnt[a] = cnt[b]+1;;
        }

    }
    else if(visited[b]==1&&cnt[b]==0)
    {
        sub = 0;
       // printf("calling dfs2 %d\n",b);
        dfs2(b);
    }
    else if(visited[b]!=0&&cnt[b]!=0)
    {
       // printf("yes\n");
        cnt[a] = cnt[b] + 1;
    }


}

void dfs2(int a)
{
    visited[a] = 99;
    sub++;

   // printf("in dfs 2   %d   %d\n",a,sub);

    int b = v[a][0];

    if(visited[b]==1)
    {
        //printf("call dfs2  %d\n",b);
        dfs2(b);
        cnt[a] = sub;

    }
    else if(visited[b]==99)
    {
        cnt[a] = sub;
        return;
    }

}
int main()
{

    int n,m,a,b,i,j,t,k=0;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        zero(n);

        for(i=1;i<=n;i++)
        {
            scanf("%d %d",&a,&b);

            v[a].push_back(b);
        }

        for(i=1;i<=n;i++)
        {
            if(visited[i]==0)
            {
                sum = 0;
                sub = 0;
               // printf("calling from main %d\n",i);
                dfs(i);
            }
        }
        int ma = -99;


        for(i=1;i<=n;i++)
        {
            if(cnt[i]>ma)
            {
                ma = cnt[i];
                b = i;
            }
        }

        printf("Case %d: %d\n",++k,b);





    }










    return 0;
}
