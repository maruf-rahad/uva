#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m,a,b,i,j,x,y,sum,tot;

    while(scanf("%lld",&n)==1)
    {
        sum = 1;
        tot = 1;
        while(tot%n!=0)
        {
            tot = (tot*10+1)%n;

            sum++;
        }
        printf("%lld\n",sum);

    }















return 0;
}
