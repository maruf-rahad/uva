#include<stdio.h>
int main()
{
    int n,sum,a,b;
    while(scanf("%d",&n)==1){
            sum=0;
        if(n==0)break;
        while(n!=0){
            sum=sum+n%10;
            n=n/10;

        }while(sum>9){
        a=sum/10;
        b=sum%10;
        sum=a+b;
        }
        printf("%d\n",sum);
    }
    return 0;
}
