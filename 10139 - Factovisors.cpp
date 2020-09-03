#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 50000
#define F first
#define S second
vector<ll>v;
vector<pair<ll,ll> >v2;
ll ara[mx+10];
ll m;
void sieve()
{
    ll i,j;
    v.push_back(2);
    for(i=3;i<=mx;i+=2)
    {
        if(ara[i]==0)
        {
            v.push_back(i);
            for(j=i*i;j<=mx;j+=i)
            {
                ara[j] = 1;
            }
        }
    }
}
void primeFactor(ll n)
{
    ll s = sqrt(n);
    for(ll i=0;i<m&&v[i]<=s;i++)
    {
        if(n%v[i]==0)
        {
            ll sum = 0;
            while(n%v[i]==0)
            {
                sum++;
                n/=v[i];
            }
            v2.push_back({v[i],sum});
        }
    }
    if(n!=1)
    {
        v2.push_back({n,1});
    }
}
ll cal(ll n,ll a)
{
    ll sum = 0;
    for(ll i=a;i<=n;i=i*a)
    {
        sum=sum+n/i;
    }
    return sum;
}
int main()
{
    //freopen("output.txt","w",stdout);
    sieve();
    ll n,a,b,i,j,x,y,flag;
    m = v.size();

    while(scanf("%lld %lld",&n,&y)==2)
    {
        if(y<=n)
        {
                printf("%lld divides %lld!\n",y,n);
                continue;
        }

        flag = 0;
        v2.clear();
        primeFactor(y);

        for(i=0;i<v2.size();i++)
        {
            a = v2[i].F;
            b = v2[i].S;
            x = cal(n,a);
            if(x<b)
            {
                flag = 1;
                break;
            }
        }
        if(flag==1)
        {
            printf("%lld does not divide %lld!\n",y,n);
        }
        else{
            printf("%lld divides %lld!\n",y,n);
        }



    }












return 0;
}
