#include<bits/stdc++.h>
using namespace std;
#define mx 50000
#define ll long long
vector<ll>v;
ll ara[mx+10];
ll sz,tot;
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

ll phi(ll n)
{
    ll i,sum = n,s,fac;
    s = sqrt(n);
    tot = 1;
    for(i=0;i<sz&&v[i]<=s;i++)
    {
        fac = 0;
        if(n%v[i]==0)
        {
            while(n%v[i]==0)
            {
                fac++;
                n/=v[i];
            }

            sum-=sum/v[i];
            tot*=(fac+1);
        }
    }
    if(n!=1)
    {
        tot*=(2);
        sum-=sum/n;
    }
    return sum;
}
int main()
{
    sieve();
    sz = v.size();

    ll n,m,a,b,i,j,x,y;


    while(scanf("%lld",&n)==1)
    {
        x = phi(n);
        printf("%lld\n",n-x-tot+1);
    }













return 0;
}
