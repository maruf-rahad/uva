#include<bits/stdc++.h>
using namespace std;

int ara[120];
int visited[120];
vector<int>G[120];
vector<int>vec;
void zero(int n)
{
    vec.clear();
    for(int i = 0;i<=n+2;i++)
    {
        visited[i] = 0;
        G[i].clear();
        ara[i] = 0;
    }
}

void topologicalSort(int n)
{
    int i;
    queue<int>q;

    for(i=1;i<=n;i++)
    {
        if(ara[i]==0)
        {
            q.push(i);
        }
    }

    while(!q.empty())
    {

        int u = q.front();
        visited[u] = 1;
        vec.push_back(u);
        q.pop();

        for(i=0;i<G[u].size();i++)
        {
            int v = G[u][i];
            ara[v]--;
            if(ara[v]==0&&visited[v]==0)
            {
                q.push(v);
            }
        }
    }




}
int main()
{
    int n,m,a,b,i,j,x,y;

    while(scanf("%d %d",&n,&m)==2)
    {
        if(n==0&&m==0)break;
        zero(n);

        for(i=1;i<=m;i++)
        {
            scanf("%d %d",&a,&b);
            G[a].push_back(b);
            ara[b]++;
        }
        topologicalSort(n);
        int flag = 0;
        for(i=0;i<vec.size();i++)
        {
            if(flag==0)
            {
                flag = 1;
                printf("%d",vec[i]);
            }
            else{
                printf(" %d",vec[i]);
            }
        }
        printf("\n");
    }







return 0;
}
