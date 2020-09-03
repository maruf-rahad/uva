#include<bits/stdc++.h>
using namespace std;
vector<int>G[111];
int visited[111];
int d[111];
int low[111];
int parent[111];
int arti[111];
int sum,tim,flag;


void zero()
{
    sum = 0;
    tim = 0;
    for(int i = 0;i<=105;i++)
    {
        G[i].clear();
        visited[i] = 0;
        d[i] = 0;
        low[i] = 0;
        parent[i] = i;
        arti[i] = 0;
    }
}
void articulation(int u)
{
    visited[u] = 1;

    tim++;
    d[u] = tim;
    low[u] = tim;
    int child = 0;

    for(int i = 0;i<G[u].size();i++)
    {
        int v = G[u][i];

        if(v==parent[u])continue;
        if(visited[v]==1)
        {
            low[u] = min(low[u],d[v]);
        }
        if(visited[v]==0)
        {
            child++;
            parent[v] = u;
            articulation(v);
            low[u] =  min(low[u],low[v]);
            if(d[u]<=low[v]&&u!=1){
                arti[u] = 1;
            }
        }

        if(child>1&&u==1)
        {
            arti[u] = 1;
        }

    }







}
int main()
{
    string s;
    int n,m,a,b,i,j,x,y;

    while(scanf("%d",&n)==1&&n!=0)
    {
        zero();

        while(getline(cin,s))
        {
            if(s=="0")break;

            int flag = 0;
            stringstream ss(s);

            while(ss>>x)
            {
                if(flag==0)
                {
                    a = x;
                    flag = 1;
                }
                else{
                    G[a].push_back(x);
                    G[x].push_back(a);
                }
            }



        }

        articulation(1);

        for(i=1;i<=n;i++)
        {
            if(arti[i]>0)sum++;

        }

        printf("%d\n",sum);



    }














return 0;
}
