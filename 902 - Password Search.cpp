#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","w",stdout);
    int n,a,b,i,j,x,y,z,sum;
    string s,ch,ans;
    char str;


    map< string , int >mp;
    map< string , int > :: iterator it;

    while(cin>>n>>s)
    {

        mp.clear();
        a= s.size();
        x = a;
        for(i=0;i+n<=a;i++)
        {
                ch = s.substr(i,n);

                b = ch.size();

            if(b==n)
            {
                if(mp.find(ch)==mp.end())
                {
                    mp[ch] = 1;
                }
                else{
                    mp[ch]+=1;
                }
            }


        }
        a = -10;
            for(it = mp.begin();it!=mp.end();it++)
            {
                if(it->second>a)
                {
                    a = it->second;
                    ans = it->first;
                }

            }
            cout<<ans<<endl;

    }
return 0;
}
