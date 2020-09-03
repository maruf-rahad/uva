#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>v;
vector<ll>v2;

ll power(ll a,ll b)
{

    ll sum = 1;

    for(int i=1; i<=b; i++)
    {
        sum = sum*a;
    }

    return sum;
}

string ans(ll a,ll b)
{
    string s2;
    char ch;
    if(a==0)
    {
        s2 = "0";
    }
    else
    {
        while(a!=0)
        {
            ll x = a%b;
            v2.push_back(x);
            a=a/b;
        }
        for(int i=v2.size()-1; i>=0; i--)
        {

            if(v2[i]>=10)
            {
                ch = v2[i]+'A'-10;
            }
            else
            {
                ch = v2[i]+'0';
            }
            s2+=ch;
        }
    }
    return s2;


}
int main()
{
    //freopen("output.txt","w",stdout);
    ll n,m,a,b,i,j,x,y,sum,tot;
    string s,s2;

    while(scanf("%lld %lld",&a,&b)==2)
    {
        tot = 0;
        v.clear();
        v2.clear();
        int flag = 0;
        cin>>s;
        for(i=s.size()-1; i>=0; i--)
        {
            if(s[i]>='A'&&s[i]<='Z')
            {
                x = s[i]-'A'+10;
            }
            else
            {
                x = s[i]-'0';
            }
            if(x>=a)
            {
                flag  = 1;
                break;
            }


            v.push_back(x);
        }
        if(flag==1)
        {
            cout<<s<<" is an illegal base "<<a<<" number"<<endl;

            continue;
        }

        for(i=0; i<v.size(); i++)
        {
            tot = tot+power(a,i)*v[i];
        }

        s2 = ans(tot,b);

        cout<<s<<" base "<<a<<" = "<<s2<<" base "<<b<<endl;


    }










    return 0;
}
