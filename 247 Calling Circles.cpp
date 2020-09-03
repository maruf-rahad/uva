#include<bits/stdc++.h>
using namespace std;
map<string,vector<string> >mp;
map<string,vector<string> >mp2;
map<string,vector<string> > :: iterator it;
map<string,int>visited;
map<string,int> ::iterator it2;
vector<string>vec;
int n,flag;
void zero()
{
    for(it2 = visited.begin();it2!=visited.end();it2++)
    {
        string ah = it2->first;
        visited[ah] = 0;
    }
}

void dfs(string u)
{
    visited[u] = 1;
    for(int i=0;i<mp[u].size();i++)
    {
        string v = mp[u][i];
        if(visited[v]==0)
        {
            dfs(v);
        }
    }
    vec.push_back(u);
}
void dfs2(string u)
{
    visited[u] = 1;
    for(int i=0;i<mp2[u].size();i++)
    {
        string v = mp2[u][i];
        if(visited[v]==0)
        {
            dfs2(v);
        }
    }
    if(flag==0)
    {
        cout<<u;
        flag = 1;
    }
    else{
        cout<<", "<<u;
    }

}


int main()
{
    int m,a,b,i,j,k=0;
    string ah,bh;
    while(scanf("%d %d",&n,&m)==2&&n!=0&&m!=0)
    {
        mp.clear();
        mp2.clear();
        visited.clear();
        vec.clear();
        for(i=1;i<=m;i++)
        {
            cin>>ah>>bh;
            mp[ah];
            mp[bh];
            mp[ah].push_back(bh);
            mp2[bh].push_back(ah);
            visited[ah] = 0;
            visited[bh] = 0;
        }

        for(it = mp.begin();it!=mp.end();it++)
        {
            ah = it->first;
            if(visited[ah]==0)
                dfs(ah);
        }
        zero();
        flag = 0;
        if(k>=1)printf("\n");
        printf("Calling circles for data set %d:\n",++k);

        for(i = vec.size()-1;i>=0;i--)
        {
            if(visited[vec[i]]==0)
            {
                dfs2(vec[i]);
                flag = 0;
                cout<<endl;
            }
        }







    }








return 0;
}
