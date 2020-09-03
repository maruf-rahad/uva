#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ara[10005];

void make()
{
    ll sum,i,j;
    sum = 1;
    ara[0] = 1;

    for(i=1;i<=10000;i++)
    {
        sum = sum*i;
        while(sum%10==0)sum/=10;
        ara[i] = sum%10;
        sum = sum%100000000;
    }
}
int main()
{
    make();
    ll i,j,n,m;

    while(scanf("%lld",&n)==1)
    {
        printf("%5lld -> %lld\n",n,ara[n]);




    }









    return 0;
}
