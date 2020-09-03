#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,n,m,a,b,i,j,x,y,k;

    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&m);
        a = 0;
        while(m--)
        {

            scanf("%lld",&k);

            x = 1;
            while(k--)
            {
                scanf("%lld",&y);
                x = (x*y)%n;
            }
            a += x;
        }

        printf("%lld\n",a%n);

    }












    return 0;
}
