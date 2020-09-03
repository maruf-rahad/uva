#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long n,a,b,i,j,sum,x,y,q;
    while(scanf("%lld",&n)==1)
    {
        if(n==-1)break;
        q = 1;
        x = 0;
        y = 0;
        sum = 0;
        while(n--)
        {
            a = x;
            b = y;
            x = a + b + q;
            y = a;
        }
        printf("%lld %lld\n",x,x+y+1);
    }

return 0;
}
