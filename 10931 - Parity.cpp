#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,j,sum;
    int ara[50000];
    while(scanf("%lld",&n)==1){
            if(n==0)break;
        i=0;
        sum=0;
        while(n!=0){
                ara[i]=n%2;
        n=n/2;
        i++;
        }
        for(j=0;j<i;j++){
            if(ara[j]==1){
                sum+=1;
            }
        }
        printf("The parity of ");

        for(j=i-1;j>=0;j--){
            printf("%d",ara[j]);
        }
        printf(" is %lld (mod 2).\n",sum);
    }


return 0;
}
