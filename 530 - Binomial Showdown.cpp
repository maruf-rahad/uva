#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,a,b,i,j,x,y;

    while(scanf("%lld %lld",&n,&m)==2)
    {
        a = n-m;

        if(a>m)
        {
            x = a;
            y = m;
        }
        else{
            x = m;
            y = a;
        }

        printf("%lld %lld\n",x,y);

    }





return 0;
}
