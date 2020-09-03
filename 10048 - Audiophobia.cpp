#include<bits/stdc++.h>
using namespace std;
int parent[1200];
int visited[1200];
int mx,flag;
vector<pair<int,pair<int,int> > >v;
vector<pair<int,int> >G[1200];

void makeset(int n)
{
    for(int i=0; i<=n+2; i++)
    {
        G[i].clear();
        parent[i] = i;
        visited[i] = 0;
    }
}

int find_parent(int a)
{
    if(parent[a]==a)
    {
        return a;
    }
    parent[a] = find_parent(parent[a]);

    return parent[a];
}
void mst()
{
    int a,b,c,x,y;
    for(int i=0; i<v.size(); i++)
    {
        c = v[i].first;
        a = v[i].second.first;
        b = v[i].second.second;

        x = find_parent(a);
        y = find_parent(b);
        if(x!=y)
        {
            parent[y] = x;
            G[a].push_back({b,c});
            G[b].push_back({a,c});

        }
    }
}

void dfs(int u,int q)
{
    if(flag==1)
        return;
    visited[u] = 1;

    for(int i=0; i<G[u].size(); i++)
    {
        int b = G[u][i].first;
        int c = G[u][i].second;
        if(b==q)
        {
            flag = 1;
            mx = c;
            return;
        }
        if(visited[b]==0)
        {
            dfs(b,q);
        }

        if(flag==1)
        {
            if(c>mx)
                mx = c;

            return;
        }
    }



}
int main()
{
    //freopen("output.txt","w",stdout);
    int n,m,i,j,x,y,t,a,b,c,k=0,q;

    while(scanf("%d %d %d",&n,&m,&q)==3)
    {
        if(n==0&&m==0&&q==0)
            break;
        v.clear();
        makeset(n);
        for(i=1; i<=m; i++)
        {
            scanf("%d %d %d",&a,&b,&c);
            v.push_back(make_pair(c,make_pair(a,b)));
        }
        sort(v.begin(),v.end());
        mst();



        if(k>0)printf("\n");
        printf("Case #%d\n",++k);
        while(q--)
        {
            for(i=0;i<=n+2;i++)visited[i] = 0;

            flag = 0;
            mx = -9;
            scanf("%d %d",&a,&b);
            dfs(a,b);
            if(flag==0)
            {
                printf("no path\n");
            }
            else{
                printf("%d\n",mx);
            }


        }
    }












    return 0;

}
