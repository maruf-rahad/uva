#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 50000
ll ara[mx+10];
vector<ll>v;
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

ll powi(ll n,ll m)
{
    ll i,sum = 1;
    for(i=1;i<=m;i++)
    {
        sum = sum*n;
    }
    return sum;
}
ll makeans(ll n)
{
    if(n==1)return 2;
    ll i,j,sum,tot=0,flag=0,s;
    s = sqrt(n);

    for(i=0;i<sz&&v[i]<=s;i++)
    {
        sum = 0;
        if(n%v[i]==0)
        {
            if(flag==1)flag=2;
            if(flag==0)flag=1;
            while(n%v[i]==0)
            {
                sum++;
                n/=v[i];
            }
            tot+=(powi(v[i],sum));
        }

    }
    if(n!=1)
    {

        tot+=n;
        if(flag==1)flag=2;
    }

    if(flag==2)return tot;
    else return tot+1;

}
int main()
{
   // freopen("output.txt","w",stdout);
    sieve();
    sz = v.size();
    ll i,j,a,b,x,y,k=0,n;

    while(scanf("%lld",&n)==1&&n!=0)
    {
        x = makeans(n);
        printf("Case %lld: %lld\n",++k,x);
    }









return 0;
}
