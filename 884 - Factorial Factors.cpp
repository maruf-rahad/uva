#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 1000100
vector<ll>v;
ll m;
ll ara[mx+10];
ll ara2[mx+10];

void sieve()
{
    ll i,j;
    v.push_back(2);
    for(i=3; i<=mx; i+=2)
    {
        if(ara[i]==0)
        {
            v.push_back(i);
            for(j=i*i; j<=mx; j+=(2*i))
                ara[j] = 1;
        }
    }
}
ll factorcnt(ll n)
{
    ll i,j,s,sum;
    sum = 0;
    s = sqrt(n);
    for(i=0; i<m&&v[i]<=s&&v[i]<=n; i++)
    {
        if(n%v[i]==0)
        {
            while(n%v[i]==0)
            {
                n/=v[i];
                sum++;
            }
        }
    }
    if(n!=1)sum++;

    return sum;
}
int main()
{
    // freopen("output.txt","w",stdout);
    sieve();
    m = v.size();
    ll n,a,b,i,j,x;
    for(i=2;i<=1000000;i++)
    {
        ara2[i] = ara2[i-1]+factorcnt(i);
    }

    while(scanf("%lld",&n)==1)
    {
        printf("%lld\n",ara2[n]);
    }





    return 0;
}
