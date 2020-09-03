#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,j,sum,s,b,c,a;
    while(scanf("%lld",&n)==1){
        if(n==3){
            s=15;
            printf("%lld\n",s);
            continue;
        }

        b=6;
        s=7;
        a=n/2+1;
        a=a-2;
        while(a>0){
            b=b+4;
            a--;
            s=s+b;
        }
        s=s+s-2+s-4;
        printf("%lld\n",s);
    }
    return 0;
}
