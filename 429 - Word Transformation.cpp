#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
map<string,int>visited;
map<string,int> :: iterator it;
vector<string>v;
queue<string>q;

void bfs(string ah,string bh)
{
    string s1,s2;
    int a,b,i,j,x,y,sum;
    q.push(ah);

    while(!q.empty())
    {
        s1 = q.front();
        // cout<<"pop = "<<s1<<" :: "<<endl;

        q.pop();
        if(visited[s1]==0)
        {
            visited[s1] = 1;
            if(s1==bh)
            {
                cout<<ah<<" "<<bh<<" "<<mp[s1]<<endl;
                break;
            }
            else
            {

                for(it = mp.begin(); it!=mp.end(); it++)
                {
                    s2 = it->first;
                    sum = 0;
                    if(s2.size()==bh.size())
                    {
                        for(j=0; j<ah.size(); j++)
                        {
                            if(s1[j]!=s2[j])
                            {
                                sum++;
                                if(sum>=2)break;
                            }
                        }
                        if(sum==1)
                        {
                            q.push(s2);
                            if(mp[s2]==0)
                            {
                                mp[s2] = mp[s1]+1;
                                // cout<<s2<<" : "<<mp[s2]<<endl;
                            }

                        }
                    }
                }


            }
        }
    }

}



int main()
{
    //freopen("input.txt","w",stdout);
    int n,a,b,i,j,x,y,z,sum;
    char sp,ch[30];
    string s,str2,ah,bh;

    scanf("%d",&n);
    scanf("%c",&sp);
    scanf("%c",&sp);

    mp.clear();
    v.clear();


    for(i=1; i<=n; i++)
    {
        if(i>1)printf("\n");
        while(gets(ch))
        {
            s = string(ch);
            if(s=="*")break;
            mp[s] = 0;

        }

        while(gets(ch))
        {
            s =  string(ch);
            if(s.size()==0)break;
            stringstream ss(s);

            while(ss>>ah)
            {
                v.push_back(ah);
            }
            bh = v[1];
            ah = v[0];
            while(!q.empty())
            {
                q.pop();
            }

            v.clear();


            for(it=mp.begin(); it!=mp.end(); it++)
            {
                string z = it->first;
                mp[z] = 0;
                visited[z] = 0;
                // cout<<it->first<<" "<<it->second<<endl;
            }
            bfs(ah,bh);


        }
    }






    return 0;
}
