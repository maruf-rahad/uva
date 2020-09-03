#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ara[1000010];
ll n = 1000005,s;
vector<ll>v;
void sieve()
{
    v.push_back(2);

    for(ll i=3;i<=n;i+=2)
    {
        if(ara[i]==0)
        {
            v.push_back(i);
            for(ll j=i*i;j<=n;j+=i)
            {
                ara[j] = 1;
            }
        }
    }
    s = v.size()-1;
}
ll lower(ll a)
{

}
int main()
{
    sieve();

    ll a,b,i,j,x,y,m;

    scanf("%lld",&m);

    while(m--)
    {
        scanf("%lld %lld",&a,&b);



    }




























return 0;
}
