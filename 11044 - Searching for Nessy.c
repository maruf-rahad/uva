#include<stdio.h>
int main()
{
    int n,i,a,b,c,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d",&a,&b);
        c=a/3;
        d=b/3;
        printf("%d\n",c*d);
    }
    return 0;

}
