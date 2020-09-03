#include<bits/stdc++.h>
using namespace std;
#define mx 1000000
#define ll long long
vector<ll>v;
ll ara[mx+10];

void sieve()
{
    ll i,j;
    ara[1] = 1;
    v.push_back(2);
    for(i=4;i<=mx;i+=2)
    {
        ara[i] = 1;
    }
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

int main()
{
    v.clear();
    sieve();
    ll n,a,b,i,j,x,y,s;
    int m;
    m = v.size();

    while(scanf("%lld",&n)==1&&n!=-1)
    {
        s = sqrt(n);
        for(i=0;i<m&&v[i]<=s;i++)
        {
            if(n%v[i]==0)
            {
                while(n%v[i]==0)
                {
                    printf("    %lld\n",v[i]);
                    n/=v[i];
                }
            }
        }
        if(n!=1)
        {
            printf("    %lld\n",n);
        }
        printf("\n");
    }






















 return 0;

}
