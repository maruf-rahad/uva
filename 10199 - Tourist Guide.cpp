#include<bits/stdc++.h>
using namespace std;
map<string,vector<string> >mp;
map<string,vector<string> > ::iterator it;
map<string,int>visited;
map<string,int>d;
map<string,int>low;
map<string,int>ans;
map<string,int> :: iterator it2;
map<string,string>parent;
int tim;
string ch;

void sett(string ah)
{
    visited[ah] = 0;
    d[ah] = 0;
    low[ah] = 0;
    ans[ah] = 0;
    mp[ah];
}
void clearr()
{
    mp.clear();
    visited.clear();
    d.clear();
    low.clear();
    ans.clear();
    parent.clear();
}

void articulation(string u)
{
    visited[u] = 1;
    tim++;
    d[u] = tim;
    low[u] = tim;
    int child = 0;

    for(int i=0;i<mp[u].size();i++)
    {
        string v = mp[u][i];

        if(v == parent[u])continue;

        if(visited[v]==1)
        {
            low[u] = (min(low[u],d[v]));
        }
        if(visited[v]==0)
        {
            child++;
            parent[v] = u;
            articulation(v);
            low[u] = min(low[u],low[v]);
            if(d[u]<=low[v]&&u!=ch)
            {
                ans[u] = 1;
            }
            if(child>1&&u==ch)
            {
                ans[u] = 1;
            }
        }
    }


}
int main()
{
    //freopen("output.txt","w",stdout);
    int n,m,i,j,t,sum,k = 0;
    string ah,bh;

    while(scanf("%d",&n)==1&&n!=0)
    {
        clearr();
        for(i=1;i<=n;i++)
        {
            cin>>ah;
            sett(ah);
        }
        scanf("%d",&m);

        for(i=1;i<=m;i++)
        {
            cin>>ah>>bh;
            mp[ah].push_back(bh);
            mp[bh].push_back(ah);
        }

        it = mp.begin();
        ch = it->first;
        for(it = mp.begin();it!=mp.end();it++)
        {
            ch = it->first;
            if(visited[ch]==0)
                articulation(ch);
        }
        sum = 0;
        for(it2 = ans.begin();it2!=ans.end();it2++)
        {
            if(it2->second>=1)sum++;
        }
        if(k>=1)
        {
            printf("\n");
        }
        printf("City map #%d: %d camera(s) found\n",++k,sum);

        for(it2 = ans.begin();it2!=ans.end();it2++)
        {
            if(it2->second>=1)cout<<it2->first<<endl;
        }

    }











return 0;
}
