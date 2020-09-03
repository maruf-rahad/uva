#include<bits/stdc++.h>
using namespace std;
vector<pair<int,pair<string ,string > > >v;
map<string,string>mp;
map<string,int>visited;
map<string,vector<pair<string ,int> > >G;
map<string,vector<pair<string,int> > > :: iterator it;
int mx,flag;
void makeset(string a)
{
    mp[a] = a;
    visited[a] = 0;
}

string find_parent(string a)
{
    if(mp[a]==a)
        return a;

    mp[a] = find_parent(mp[a]);
    return mp[a];
}
void mst()
{
    string a,b,x,y;
    int c;

    for(int i=v.size()-1;i>=0;i--)
    {
        c = v[i].first;
        a = v[i].second.first;
        b = v[i].second.second;

        x = find_parent(a);
        y = find_parent(b);
        if(x!=y)
        {
            mp[y] = x;
            G[a].push_back({b,c});
            G[b].push_back({a,c});
        }

    }

}

void dfs(string u,string v)
{

    if(flag == 1)return;
    visited[u] = 1;
    //cout<<"aise "<<u<<endl;
    for(int i=0;i<G[u].size();i++)
    {

        string b = G[u][i].first;
       // cout<<"jamu "<<b<<endl;
        int c = G[u][i].second;
        if(b==v)
        {
           // printf("shoman\n");
            flag = 1;
            mx = c;
            return;
        }
        if(visited[b]==0)
        {
            dfs(b,v);
        }
        if(flag==1&&c<mx)
        {
            mx = c;
            return;
        }
    }

}
int main()
{
  //  freopen("output.txt","w",stdout);
    int n,m,i,j,c,k=0;
    string a,b,x,y;

    while(scanf("%d %d",&n,&m)==2)
    {
        if(n==0&&m==0)break;
        mp.clear();
        G.clear();
        v.clear();
        visited.clear();
        for(i=1;i<=m;i++)
        {
           cin>>a>>b>>c;
           G[a];
           G[b];
           makeset(a);
           makeset(b);
           v.push_back(make_pair(c,make_pair(a,b)));

        }
        sort(v.begin(),v.end());
        mst();
        mx = 999999999;
        flag = 0;
        cin>>a>>b;
        dfs(a,b);


        printf("Scenario #%d\n",++k);
        printf("%d tons\n\n",mx);




    }





























return 0;
}
