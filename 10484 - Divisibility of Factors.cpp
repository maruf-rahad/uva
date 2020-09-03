#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 50000
#define F first
#define S second
ll ara[mx+10];
vector<ll>v;
vector<ll>v2;
map<ll,ll>mp;
map<ll,ll> :: iterator it;
ll sz;
void sieve()
{
    ll i,j;
    v.push_back(2);
    for(i=3;i<=mx;i+=2)
    {
        if(ara[i]==0)
        {
            v.push_back(i);
            for(j=i*i;j<=mx;j+=(2*i))
            {
                ara[j] = 1;
            }
        }
    }
}

ll allFactor(ll m,ll x)
{
    ll i,s,sum,n;
    n = m;
    s = sqrt(n);
    for(i=0;i<sz&&v[i]<=s;i++)
    {
        sum = 0;
        if(n%v[i]==0)
        {
            while(n%v[i]==0)
            {
                n/=v[i];
                sum++;
            }
            if(v[i]>x)return -1;
            mp[v[i]] = sum;
        }
    }
    if(n!=1)
    {
        if(n>x)return -1;
        mp[n] = 1;
    }
    return 0;
}
ll ansmaking(ll n)
{
    ll i,j,sum,tot=1,flag,s,a;

    s = v2.size();
    for(i=0;i<sz&&v[i]<=n;i++)
    {
        a = v[i];
        sum = 0;
        for(j=a;j<=n;j=j*a)
        {
            sum+=n/j;
        }

        if(mp.find(a)==mp.end())
        {
            tot*=(++sum);
        }
        else if(sum<mp[a])
        {
            return -1;
        }
        else{
            ++sum;
           //= printf("%lld %lld\n",mp[a],sum);
            tot*=(sum-mp[a]);
        }

    }
    return tot;
}
int main()
{
  // freopen("output.txt","w",stdout);
    sieve();
    sz = v.size();
    ll n,m,a,b,i,j,x,y;

    while(scanf("%lld %lld",&n,&m)==2)
    {
        if(n==0&&m==0)break;
        n = abs(n);
        m = abs(m);
        v2.clear();
        mp.clear();
        x = allFactor(m,n);
        if(x==-1)
        {
            printf("0\n");
            continue;
        }

        x = ansmaking(n);
        if(x==-1)printf("0\n");
        else{
            printf("%lld\n",x);
        }
    }










return 0;
}
