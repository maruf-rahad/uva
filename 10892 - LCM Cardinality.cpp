#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>v;
int main()
{
   // freopen("output.txt","w",stdout);
    ll n,m,a,b,i,j,x,y,s,sum;

    while(scanf("%lld",&n)==1&&n!=0)
    {
        v.clear();
        s = sqrt(n);
        sum = 0;
        for(i=1;i<=s;i++)
        {
            if(n%i==0)
            {
                v.push_back(i);
                if(i!=n/i)v.push_back(n/i);
            }
        }

        for(i=0;i<v.size();i++)
        {
            for(j=0;j<v.size();j++)
            {
                a = (v[i]*v[j])/__gcd(v[i],v[j]);
                if(i<=j&&a==n)
                {
                   // printf("%lld %lld\n",v[i],v[j]);
                    sum++;
                }
            }
        }

        printf("%lld %lld\n",n,sum);
    }










return 0;
}
