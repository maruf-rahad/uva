#include<stdio.h>
int main()
{
    int t,n,i,a,b;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
            scanf("%d",&n);
            n=((((((n*567)/9)+7492)*235)/47)-498);
            a=n/10;
            b=a%10;
            if(b<0){
                b=(-1)*b;
            }
            printf("%d\n",b);

    }
    return 0;
}
