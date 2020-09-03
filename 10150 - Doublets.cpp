#include<bits/stdc++.h>
using namespace std;
#define FasterIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int parent[26000];
int visited[26000];
vector<string>G[20];
map<string,int>mp;
int flag,sz;
void zero()
{
    for(int i=0; i<20; i++)
        G[i].clear();
    mp.clear();
}
void zero2()
{
    for(int i=0; i<=sz; i++)
    {
        parent[i] = 0;
        visited[i] = 0;
    }
}

bool check(string a,string b,int x)
{
    int sum = 0,y,flag;
    for(int i=0;i<x;i++)
    {
        if(a[i]!=b[i])
        {
            sum++;
            if(sum>1)return false;
        }
    }
    return true;


}
void bfs(int u,int b,int x)
{
    queue<int>q;
    q.push(u);
    visited[u] = 1;
    while(!q.empty())
    {
        u = q.front();
        q.pop();
        for(int i=0;i<sz;i++)
        {
            int v = i;
            if(u!=v&&visited[v]==0&&check(G[x][u],G[x][i],x))
            {
                q.push(v);
                visited[v] = 1;
                parent[v] = u;

                if(v==b)
                {
                    flag = 1;
                    return;
                }

            }
        }
    }


}
void printpath(int a,int b,int x)
{
    if(a==b)
    {
        cout<<G[x][a]<<endl;
    }
    else{
        printpath(a,parent[b],x);
        cout<<G[x][b]<<endl;
    }
    return ;

}
int main()
{
    // freopen("output.txt","w",stdout);
   // FasterIO;
    string s,s2,s3;
    int k = 0,i=0,j,a,b,x,y;
    while(getline(cin,s))
    {
        G[s.size()].push_back(s);
        mp[s] = 1;

        while(getline(cin,s))
        {
            if(s.size()==0)
                break;

            G[s.size()].push_back(s);
            mp[s] = 1;
        }

        while(cin>>s>>s2)
        {
            k++;
            if(k>1)cout<<endl;
            x = s.size();
            y = s2.size();

            if(x!=y||mp.find(s)==mp.end()||mp.find(s2)==mp.end())
            {
                cout<<"No solution."<<endl;
            }
            else if(s==s2)
            {
                cout<<s<<endl;
            }
            else
            {
                sz = G[x].size();
                a = find(G[x].begin(),G[x].end(),s)-G[x].begin();
                b = find(G[y].begin(),G[y].end(),s2)-G[y].begin();
                flag = 0;
                zero2();
                bfs(a,b,x);
                if(flag==0)
                {
                     cout<<"No solution."<<endl;
                }
                else{
                   printpath(a,b,x);
                }
            }
        }
    }





    return 0;
}
