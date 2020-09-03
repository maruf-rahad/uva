#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ara[1000010];
ll n = 1000005,s;
vector<ll>v;
map<ll,ll>mp;
map<ll,ll>mp2;
map<ll,ll> :: iterator it;
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
}

ll binarylow(ll n)
{
    ll low = 0,mid,high = s;

    while(low<=high)
    {
        mid = (low+high)/2;
        if(v[mid]==n)
        {
            return mid;
        }
        else if(v[mid]<n)
        {
            low = mid+1;
        }
        else if(v[mid]>n)
        {
            high = mid-1;
        }
    }
   return low;

}
ll binaryhigh(ll n)
{
    ll low = 0,mid,high = s;

    while(low<=high)
    {
        mid = (low+high)/2;
        if(v[mid]==n)
        {
            return mid;
        }
        else if(v[mid]<n)
        {
            low = mid+1;
        }
        else if(v[mid]>n)
        {
            high = mid-1;
        }
    }
   return low-1;
}
int main()
{
    sieve();
    ll t,i,j,a,b,x,y,flag,sum,n,m,mx;
    s = v.size()-1;
   // for(i=0;i<=20;i++)printf("%lld %lld\n",i,v[i]);

    scanf("%lld",&t);

    while(t--)
    {
        mp.clear();
        mp2.clear();
        scanf("%lld %lld",&n,&m);

        a = binarylow(n);
        b = binaryhigh(m);

      // printf("%lld %lld %lld %lld\n",a,v[a],b,v[b]);

        for(i=a+1;i<=b;i++)
        {
            mp[v[i]-v[i-1]]++;
        }

        ll flag = 0;
        mx = -99999999;
        x = 0;
        for(it = mp.begin();it!=mp.end();it++)
        {
           // printf("%lld %lld\n",it->first,it->second);
            if(it->second>mx)
            {
                mx = it->second;
                x = it->first;
                flag = 1;
            }
            else if(it->second==mx)
            {
                flag = 0;
            }
        }

        if(flag==0)
        {
            printf("No jumping champion\n");
        }
        else{
            printf("The jumping champion is %lld\n",x);
        }


    }











return 0;
}
