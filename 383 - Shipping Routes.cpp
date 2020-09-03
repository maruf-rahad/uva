#include<bits/stdc++.h>
using namespace std;
map<string,vector<string> >mp;
map<string,int>visited;
map<string,int>level;

map<string,vector<string> >  :: iterator it;

void zero()
{
    for(it = mp.begin();it!= mp.end();it++)
    {
        string ah = it->first;
        visited[ah] = 0;
        level[ah] = 0;
    }
}

void bfs(string ah,string bh)
{
    int i;
    visited[ah] = 1;
    level[ah] = 0;

    queue<string>q;
    q.push(ah);

    while(!q.empty())
    {
        string ch = q.front();
        q.pop();

        for(i=0;i<mp[ch].size();i++)
        {
            ah = mp[ch][i];
            if(visited[ah] == 0)
            {
                visited[ah] = 1;
                level[ah] = level[ch]+1;
                if(ah == bh)
                {
                    return;
                }
                q.push(ah);
            }
        }


    }


}

int main()
{
   // freopen("output.txt","w",stdout);
    int a,b,i,j,x,y,t,n,m,k = 0;
    string ah,bh,ch,ch1,ch2;

    scanf("%d",&t);
    printf("SHIPPING ROUTES OUTPUT\n");

    while(t--)
    {
        scanf("%d %d %d",&n,&m,&x);
        mp.clear();
        visited.clear();
        level.clear();
        for(i=1;i<=n;i++)
        {
            cin>>ah;
            mp[ah];
        }

        for(i=1;i<=m;i++)
        {
            cin>>ah>>bh;
            mp[ah].push_back(bh);
            mp[bh].push_back(ah);
        }

        printf("\nDATA SET  %d\n\n",++k);

        for(i=1;i<=x;i++)
        {
            zero();
            cin>>a>>ah>>bh;
            bfs(ah,bh);

            if(visited.find(ah)==visited.end()||visited.find(bh)==visited.end()||visited[bh]==0)
            {
                printf("NO SHIPMENT POSSIBLE\n");
            }
            else
            {
                b = level[bh];
                printf("$%d\n",a*b*100);
            }

        }
    }

    printf("\nEND OF OUTPUT\n");













return 0;
}
