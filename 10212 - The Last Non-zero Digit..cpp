#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll MOD  = 10000000000;
int main()
{
    ll n,m,a,b,i,j,x,y,sum;

    while(scanf("%lld %lld",&n,&m)==2)
    {
        sum = 1;
        for(i=n;i>(n-m);i--)
        {
            sum*=i;
            while(sum%10==0)sum/=10;

            sum%=MOD;
        }
        printf("%lld\n",sum%10);
    }

return 0;
}
