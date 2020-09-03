#include<bits/stdc++.h>
using namespace std;
long long ara[1000];
long long flag;
long long factorial (long long n)
{
    if(n==1||n==0){
        return ara[n];
    }else if(ara[n]!=0){
    return ara[n];
    }
    else {
        ara[n]=n*factorial(n-1);
        return ara[n];
        }
}

int main()
{
    //freopen("input.txt","w",stdout);
    long long a,b, n,i,j;
    ara[0]=1;
    ara[1]=1;
    while(scanf("%lld",&n)==1){
            if(n>13||(n<0&&n%2==-1)){
                printf("Overflow!\n");
            }
            else if(n<8){
                printf("Underflow!\n");
            }
            else {
                a=factorial(n);
            printf("%lld\n",a);
            }

    }

return 0;
}
