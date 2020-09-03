#include<stdio.h>
int main()
{
    int n,a,b,c,i,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d %d",&a,&b,&c);
        d=(c*(a+(a-b))/(a+b));
        printf("%d\n",d);
    }
    return 0;
}
