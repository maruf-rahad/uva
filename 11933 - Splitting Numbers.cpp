#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m,a,b,i,j,x,y;

    while(scanf("%lld",&n)==1)
    {
        if(n==0)break;
        int flag = 0;
        x = 0;
        y = 0;
        m = 1;

        while(n!=0)
        {
            if(n&1)
            {
                if(flag == 0)
                {
                    x+=m;
                    flag = 1;
                }
                else{
                    y+=m;
                    flag = 0;

                }
            }
            m = m*2;
            n/=2;
        }
        printf("%lld %lld\n",x,y);

    }













return 0;
}
