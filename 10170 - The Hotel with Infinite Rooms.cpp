#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    ll n,m,a,b,i,j,sum;

    while(scanf("%lld %lld",&n,&m)==2)
    {
        sum = 0;
        n--;

        while(sum<m)
        {

            sum+=++n;


        }
        printf("%lld\n",n);
    }









return 0;
}
