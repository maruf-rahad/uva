#include<stdio.h>
int main()
{
    long long a,b,c;
    while(scanf("%lld %lld",&a,&b)==2){
        if(a<b){
            c=b-a;
        }else{
        c=a-b;
        }
                    printf("%lld\n",c);
    }
    return 0;
}
