#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long

ull ara[200];

ull gcd(ull n,ull m)
{
    if(n%m==0)return m;

    return gcd(m,n%m);
}
ull lcm(ull n,ull m)
{
    ull lcm = (n*m)/gcd(n,m);

    return lcm;
}

int main()
{
    unsigned long long n,m,a,b,i,j,c,d,gc,lm,t,sum;

    scanf("%llu",&t);
    j = 0;
    while(t--)
    {
        scanf("%llu",&n);
        sum = 0;
        printf("Case %llu: ",++j);
        for(i=1;i<=n;i++)
        {
            scanf("%llu",&ara[i]);
        }

        a = ara[1];

        for(i=2;i<=n;i++)
        {
            a = lcm(a,ara[i]);
        }

        for(i=1;i<=n;i++)
        {
            sum+=(a/ara[i]);
        }
        a*=n;
        printf("%llu/%llu\n",a/(gcd(a,sum)),sum/gcd(a,sum));


    }













return 0;
}
