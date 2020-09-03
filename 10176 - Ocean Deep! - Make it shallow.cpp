#include<bits/stdc++.h>
using namespace std;
#define ll long long

int bigmod(int a,int b,int m)
{
    if(b==0)return 1;
    if(b%2==0)
    {
        ll x = (bigmod(a,b/2,m)%m);
        return (x*x)%m;
    }
    else{
        ll x = ((bigmod(a,b-1,m)%m)*(a%m))%m;
        return x;
    }
}
int main()
{
   // freopen("output.txt","w",stdout);
    ll n,m,a,b,i,j,x,y,sum,l,flag=0;
    string s,s2;

    while(cin>>s)
    {
        if(flag==0)
        {
            s2 = "";
            flag = 1;
        }
        s2+=s;
        l = s.size();
        if(s[l-1]!='#')
        {
            continue;
        }
        l = s2.size();
        sum = 0;
        m = 131071;
        for(i=0;i<l-1;i++)
        {
            if(s2[i]=='1')
            {
                x = bigmod(2LL,l-2-i,m);
                sum = (sum+x)%m;
            }
        }

        if(sum==0)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        flag = 0;


    }











return 0;
}
