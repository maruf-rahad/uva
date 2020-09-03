#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 100010
vector<ll>v;
ll ara[mx+10];

void sieve()
{
    ll i,j;
    v.push_back(2);
    for(i=3;i<=mx;i+=2)
    {
        if(ara[i]==0){
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
    if(n==1)return 0;
    ll i,s,m,sum;
    s = sqrt(n);
    m = v.size();
    sum = n;

    for(i=0;i<m&&v[i]<=s;i++)
    {
        if(n%v[i]==0)
        {
            sum-=(sum/v[i]);
            while(n%v[i]==0)n/=v[i];
        }
    }
    if(n!=1)sum-=(sum/n);

    return sum;
}
int main()
{
    //freopen("output.txt","w",stdout);
    sieve();
    ll n,m,a,b,i,j,x;
    while(scanf("%lld",&n)==1&&n!=0)
    {
        x = phi(n);
        printf("%lld\n",x);
    }








    return 0;
}
