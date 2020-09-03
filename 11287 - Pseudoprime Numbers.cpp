#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll bigmod(ll n,ll p,ll m)
{
    if(p==0)return 1;
    if(p%2==0)
    {
        ll sum = (bigmod(n,p/2,m));

        return ((sum%m)*(sum%m))%m;
    }
    else{
        return ((n%m)*(bigmod(n,p-1,m)%m))%m;
    }
}



bool check(ll n)
{
    if(n%2==0)return false;

    for(ll i  = 3;i*i<=n;i+=2)
    {
        if(n%i==0)return false;
    }
    return true;
}
int main()
{
    //freopen("output.txt","w",stdout);
    ll a,b,i,j,x,y,n,m,sum,p;

    while(scanf("%lld %lld",&p,&a)==2)
    {
        if(p==0&&a==0)break;
        m = p;
        sum = bigmod(a,p,m);

        if(sum==a&&!check(p))
        {
            printf("yes\n");
        }
         else printf("no\n");


    }















return 0;
}
