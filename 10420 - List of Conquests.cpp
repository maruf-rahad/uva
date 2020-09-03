#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
map<string,int> :: iterator it;

int main()
{
    int t,i,l;
    char ch[2000];
    string s,s2;

    while(scanf("%d",&t)==1)
    {


        getchar();
        mp.clear();

        while(t--)
        {
            getline(cin,s);
            s2.clear();
            for(i=0; i<s.size(); i++)
            {
                if(s[i]==' ')
                {
                    break;
                }
                else
                {
                    s2+=s[i];
                }
            }
            if(mp.find(s2)==mp.end())
            {
                mp[s2] = 1;
            }
            else
            {
                mp[s2]++;
            }



        }
        for(it = mp.begin(); it!=mp.end(); it++)
        {
            cout<<it->first<<" "<<it->second<<endl;
        }

    }









    return 0;
}
