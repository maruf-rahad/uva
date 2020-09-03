#include<bits/stdc++.h>
using namespace std;

unordered_map<string, vector<string > > ump;
unordered_map<string,int>visited;
unordered_map<string,int>cnt;
unordered_map<string,int>aise;
vector<string>vec;

unordered_map<string,int>  :: iterator it2;
unordered_map<string, vector<string > > :: iterator it;

int n,sum;

void topologicalSort()
{
    string ah,bh,ch,dh;
    int a,b,i,j,x,y,u,v;
    priority_queue<pair<int,string> >pq;


    for(it2 = cnt.begin(); it2 !=cnt.end(); it2++)
    {
        ah = it2->first;
        b = cnt[ah];

        if(b==0)
        {
            a = aise[ah];
            pq.push({-a,ah});
        }
    }

        while(!pq.empty())
        {


            ah = pq.top().second;
            a = pq.top().first;

            visited[ah] = 1;

            vec.push_back(ah);
            pq.pop();

            for(i = 0; i<ump[ah].size(); i++)
            {
                bh = ump[ah][i];
                cnt[bh]--;
                if(cnt[bh]==0&&visited[bh]==0)
                {
                    a = aise[bh];
                    pq.push({-a,bh});
                }

            }

        }










}


int main()
{
   // freopen("output.txt","w",stdout);
    int m,a,b,i,j,x,y,k = 0;
    string ah,bh;

    while(scanf("%d",&n)==1)
    {
        ump.clear();
        visited.clear();
        cnt.clear();
        aise.clear();
        vec.clear();
        for(i=1; i<=n; i++)
        {
            cin>>ah;
            ump[ah];
            cnt[ah] = 0;
            visited[ah] = 0;
            aise[ah] = i;
        }
        scanf("%d",&m);
        for(i=1; i<=m; i++)
        {
            cin>>ah>>bh;
            ump[ah].push_back(bh);
            cnt[bh] = cnt[bh]+1;
        }

        topologicalSort();
        printf("Case #%d: Dilbert should drink beverages in this order:",++k);

        for(i=0; i<vec.size(); i++)
        {
            cout<<" "<<vec[i];
        }
        cout<<"."<<endl<<endl;
    }

    return 0;
}
