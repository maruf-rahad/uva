#include<stdio.h>
int main()
{
    long long n;
    while(scanf("%lld",&n)==1){
            if(n==0)break;
        if(n>=101){
            n=n-10;
        }else{
        n=91;
        }
        printf("%lld\n",n);
    }
return 0;
}
