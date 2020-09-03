#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 50000
vector<ll>v;
ll ara[mx+10];
ll s,m;
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

ll factor(ll n)
{
    //printf("%lld\n",n);
    ll s = sqrt(n);
    ll sum,flag;
    sum = 0;
    flag = 0;
    ll gcd;
    for(ll i=0; i<m&&v[i]<=s; i++)
    {
        if(n%v[i]==0)
        {
            sum = 0;
            while(n%v[i]==0)
            {
                sum++;
                n/=v[i];
            }
            if(flag==0)
            {
                flag=1;
                gcd = sum;
            }
            else{
                gcd = __gcd(gcd,sum);
            }

         //   printf("%lld %lld\n",v[i],sum);

        }
    }
    if(n!=1)
    {
        gcd = 1;
    }

    return gcd;

}
int main()
{
  //  freopen("output.txt","w",stdout);
    sieve();
    m = v.size();
    ll n,a,b,i,j,x,y;



    while(scanf("%lld",&n)==1&&n!=0)
    {

        x = factor(abs(n));

        if(n<0&&x%2==0)
        {
            while(x%2!=1)x = x/2;

            printf("%lld\n",x);
        }
        else{
            printf("%lld\n",x);
        }



    }












    return 0;
}
