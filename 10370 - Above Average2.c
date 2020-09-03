#include<stdio.h>
int main()
{
    int n,i,x;
    double d,a,b,c,e;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%lf %lf %lf",&a,&b,&c);
        d=c/(a+b);
        e=(a+(a-b))*d;
        x=e;
        printf("%d\n",x);

    }
    return 0;

}
