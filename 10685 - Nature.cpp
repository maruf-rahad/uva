#include<bits/stdc++.h>
using namespace std;
map<string,string>parent;
map<string,int>visited;
map<string,int>cnt;

map<string,int> :: iterator it;

void clearr()
{
    parent.clear();
    visited.clear();
    cnt.clear();
}

void makeset(string s)
{
    parent[s] = s;
    cnt[s] = 1;
}

string find_parent(string a)
{
    if(parent[a]==a)return a;

    parent[a] = find_parent(parent[a]);
    return parent[a];
}
int main()
{
    freopen("output.txt","w",stdout);

    int n,m,a,b,i,j;
    string s,s2,x,y;
    while(scanf("%d %d",&n,&m)==2)
    {
        if(n==0&&m==0)break;
        clearr();

        for(i=1;i<=n;i++)
        {
            cin>>s;
            makeset(s);
        }
        for(i=1;i<=m;i++)
        {
            cin>>s>>s2;

            x = find_parent(s);
            y = find_parent(s2);

            if(x!=y)
            {
                parent[y] = x;
                cnt[x]+=cnt[y];
            }

        }
        int mx = -9;
        for(it = cnt.begin();it!=cnt.end();it++)
        {
            mx = max(mx,it->second);
        }
        printf("%d\n",mx);

    }








return 0;
}
