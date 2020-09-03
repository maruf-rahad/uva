#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll MOD = 1000000000;

ll bigmod(ll n,ll m)
{
    if(n==0)return 1;
    if(n%2==0)
    {
        ll x = bigmod(n/2,m);
        return (x*x)%MOD;
    }
    if(n%2==1)
    {
        ll x =((bigmod(n-1,m)%MOD)*(m%MOD))%MOD;
        return x;

    }
}
int main()
{
   // freopen("output.txt","w",stdout);
    ll a,n,m,i,j,x,y,t;
    double b,c,d;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&m,&n);
        a = bigmod(n,m);
        y = 0;
        x = 0;
        while(y<3)
        {
            x =x*10+(a%10);
            a/=10;
            y++;
        }

        y = 0;
        while(x!=0)
        {
            y = y*10+x%10;
            x/=10;
        }

        b = double(n);
        c = double(m);
        d = b*log10(c);
        d = d-floor(d);
        d = pow(10.0,d);
        while(d<100)
        {
            d = d*10.0;
        }





        printf("%03d...%03d\n",(int)(floor(d)),int(y));
    }











return 0;
}
