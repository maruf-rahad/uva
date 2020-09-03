#include<bits/stdc++.h>
using namespace std;
#define ll long long
int ara[20000005];
int n = 20000000;
vector<int>v;
vector<int>prime;

void sieve()
{
    prime.push_back(2);

    for(ll i=3;i<=n;i+=2)
    {
        if(ara[i]==0)
        {
            prime.push_back(i);
            for(ll j=i*i;j<=n;j+=i)
            {
                ara[j] = 1;
            }
        }
    }
    int s = prime.size();
    for(int i=1;i<s;i++)
    {
        if(prime[i]-prime[i-1]==2)
        {
            v.push_back(prime[i]);
        }
    }
}


int main()
{
    sieve();
    int m,a,b,i,j,x,y,z;

    while(scanf("%d",&a)==1)
    {
        printf("(%d, %d)\n",v[a-1]-2,v[a-1]);
    }











return 0;
}
