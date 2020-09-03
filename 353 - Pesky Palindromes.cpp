#include<bits/stdc++.h>
using namespace std;
int check(string sub)
{
    int i,j,c,d,flag = 0;;
    i = 0;
    j = sub.size()-1;
    while(i<=j)
    {
        if(sub[i]!=sub[j])
        {
            flag = 1;
            break;
        }
        i++;
        j--;
    }


    return flag;


}

int main()
{
    //freopen("input.txt","w",stdout);
    map< string , int >mp;
    map< string , int> :: iterator it;
    string s,sub;
    int a,b,i,j,x,y;
    while(cin>>s)
    {
        mp.clear();

        a = s.size();
        x = a;
        for(i=0; i<a; i++)
        {
            for(j=1; j<=x; j++)
            {
                sub = s.substr(i,j);
                y = check(sub);
              //  cout<<sub<<" "<<y<<endl;
                if(y==0)
                {
                    if(mp.find(sub)==mp.end())
                    {
                        mp[sub] = 1;
                    }
                }

            }
            x--;
        }
        int sum = 0;
        for(it = mp.begin(); it!=mp.end(); it++)
            {
                sum++;
               // cout<<it->first<<endl;
            }
        cout<<"The string '"<<s<<"' contains "<<sum<<" palindromes."<<endl;


    }





    return 0;
}
