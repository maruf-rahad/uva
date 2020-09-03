#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("input.txt","w",stdout);
    char ch[1000];
    map <string , string> mp;
    string str,x,s;
    int a,b,i,j;
    while(gets(ch))
    {
        if(strlen(ch)==0)break;
        str = string(ch);
        stringstream ss(ch);
        ss>>x;

        ss>>s;

        mp[s] = x;

    }

    while(gets(ch)){
            if(mp.find(ch)==mp.end())
            {
                cout<<"eh"<<endl;
            }
            else{
                cout<<mp[ch]<<endl;
            }
    }
    mp.clear();

    return 0;
}
