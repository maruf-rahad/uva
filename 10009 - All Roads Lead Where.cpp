#include<bits/stdc++.h>
using namespace std;
string ah,bh,ch1;

map<string,vector<string> >mp;
map<string,int>visited;
map<string,string>level;

map<string,vector<string> > :: iterator it;
map<string,string > :: iterator it1;

void zero()
{
    for(it = mp.begin(); it!=mp.end(); it++)
    {
        ah = it->first;
        visited[ah] = 0;
        level[ah] = "0";
    }


}

void bfs(string ch)
{
    int i;

    level[ch] = "0";
    visited[ch] = 1;

    queue<string>q;

    q.push(ch);

    while(!q.empty())
    {
        ah = q.front();

        //cout<<endl<<ah<<" : ";
        q.pop();
        for(i=0; i<mp[ah].size(); i++)
        {
            bh = mp[ah][i];

            if(visited[bh]==0)
            {
                visited[bh] = 1;
                level[bh] = ah;
                // cout<<bh<<" ";
                q.push(bh);
            }
        }

    }


}

void printpath(string ch)
{

    ah = level[ch];

   // cout<<ch<<" : "<<ah<<endl;

    if(ah=="0")
    {
    cout<<ch[0];
        return;
    }

    printpath(ah);

    cout<<ch[0];


}




int main()
{

    int n,m,i,j,x,y,t,k=0;
    string ch2;

    scanf("%d",&t);

    while(t--)
    {
        getchar();
        scanf("%d %d",&n,&m);
        mp.clear();
        visited.clear();
        level.clear();
        for(i=1; i<=n; i++)
        {
            cin>>ch1>>ch2;
            mp[ch1].push_back(ch2);
            mp[ch2].push_back(ch1);
        }


       // cout<<endl<<endl;



        for(i=1; i<=m; i++)
        {
            zero();
            cin>>ch1>>ch2;
            bfs(ch1);

          /*  for(it1 = level.begin(); it1!=level.end(); it1++)
            {
                ah = it1->first;
                bh = level[ah];

                cout<<ah<<"  :  "<<bh<<endl;



                cout<<endl;
            }*/




           printpath(ch2);
           cout<<endl;
        }

        if(t!=0)
        {
            cout<<endl;
        }


    }












    return 0;
}
