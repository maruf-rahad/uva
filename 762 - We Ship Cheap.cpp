#include<bits/stdc++.h>
using namespace std;
map<string,vector<string> >mp;
map<string,int>visited;
map<string,string>level;

map<string,vector<string> > :: iterator it;

void zero()
{
    for(it = mp.begin();it!=mp.end();it++)
    {
       string ah  = it->first;
        visited[ah] = 0;
        level[ah] = "0";
    }
}

void bfs(string ch1,string ch2)
{
    int i;
    string ah,bh;
    visited[ch1] = 1;
    level[ch1] = "0";

    queue<string>q;
    q.push(ch1);
    while(!q.empty())
    {
        ah = q.front();
        q.pop();

        for(i=0;i<mp[ah].size();i++)
        {
            bh = mp[ah][i];

            if(visited[bh]==0)
            {
                visited[bh] = 1;
                level[bh] = ah;
                if(bh==ch2)
                {
                    return;
                }
                q.push(bh);
            }
        }


    }

}

void printpath(string ch)
{
    string ah = level[ch];

    if(ah=="0")
    {
        return;
    }
    printpath(ah);
    cout<<ah<<" "<<ch<<endl;
}



int main()
{
   // freopen("output.txt","w",stdout);
    int a,b,i,j,x,y,n,m,k = 0;
    string ah,bh;
    while(scanf("%d",&n)==1)
    {
        k++;

        mp.clear();
        visited.clear();
        level.clear();

        for(i=1; i<=n; i++)
        {
            cin>>ah>>bh;
            mp[ah].push_back(bh);
            mp[bh].push_back(ah);
        }

          zero();

        cin>>ah>>bh;

        bfs(ah,bh);
        if(k>1)printf("\n");
        if(level.find(bh)==level.end()||level.find(ah)==level.end()||level[bh]=="0")
        {
            printf("No route\n");
        }
        else
        {
            printpath(bh);
        }





    }












    return 0;
}
