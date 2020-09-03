#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<string>v;

ll check(string a ,string b)
{
    string x = a+b;
    string y = b+a;

    if(x<y)return 1;
    else return 2;
}
int main()
{
   // freopen("output.txt","w",stdout);
    ll a,b,i,j,x,y,n;
    string s;
    while(scanf("%lld",&n)==1&&n!=0)
    {
        v.clear();
        while(n--)
        {
            cin>>s;
            v.push_back(s);
        }
        sort(v.begin(),v.end());
        for(i=0;i<v.size();i++)
        {
            for(j=0;j<v.size()-1;j++)
            {
                a = check(v[j],v[j+1]);
                if(a==1)
                {
                    string temp = v[j];
                    v[j] = v[j+1];
                    v[j+1] = temp;
                }
            }
        }

        for(i=0;i<v.size();i++)cout<<v[i];


        printf("\n");
    }










return 0;
}
