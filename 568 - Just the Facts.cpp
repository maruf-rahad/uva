#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ara[20000];
void make()
{
    ara[0] = 1;
    ll a,b,i,j,sum;
    sum = 1;
    for(i=1;i<=11000;i++)
    {
        sum = sum*i;
        while(sum%10==0)
        {
            sum/=10;
        }
        sum = sum%100000000;
        ara[i] = sum%10;
    }
}

int main()
{
    freopen("output.txt","w",stdout);
    make();

    ll i,j,a,b,x,y,n;

    while(scanf("%lld",&n)==1)
    {
        printf("%5lld -> %lld\n",n,ara[n]);
    }












return 0;
}
