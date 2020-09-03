#include<stdio.h>
int main()
{
    int n,i,a,b,c,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d %d",&a,&b,&c);
        if((a>b&&b>c)||(c>b&&b>a))x=b;
        else if((b>a&&a>c)||c>a&&a>b)x=a;
        else x=c;
        printf("Case %d: %d\n",i,x);
    }
    return 0;
}
