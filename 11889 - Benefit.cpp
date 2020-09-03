#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 5000
vector<int>v;
int ara[mx+10];
int sz;
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
ll powi(ll x,ll y)
{
    ll sum = 1,i;
    for(i=1;i<=x;i++)
    {
        sum = sum*y;
    }
    return sum;
}
ll factormake(ll n,ll m)
{
    int s = sqrt(m),i;
    ll sum,sum2,tot;
    tot = 1;
    for(i=0;i<sz&&v[i]<=s;i++)
    {
        sum = 0;
        sum2 = 0;
        if(n%v[i]==0)
        {
            while(n%v[i]==0)
            {
                n/=v[i];
                sum++;
            }
        }
        if(m%v[i]==0)
        {
            while(m%v[i]==0)
            {
                sum2++;
                m/=v[i];
            }
        }
        if(sum2>sum)
            tot*=(powi(sum2,v[i]));
    }

    if(m!=1&&n==1)
    {
          tot*=(powi(1,m));
    }

    return tot;
}

int main()
{
  //  freopen("output.txt","w",stdout);
    sieve();
    ll n,m,a,b,i,j,x,y,t;
    sz = v.size();
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&m);
        if(m%n!=0)
        {
            printf("NO SOLUTION\n");
        }
        else{
            x = factormake(n,m);
            printf("%lld\n",x);
        }
    }












return 0;
}
