#include<stdio.h>
int main()
{
    int a,b,c,d,m,n,x,total;
    while(scanf("%d %d %d %d",&a,&b,&c,&d)==4){
        if(a==0&&b==0&&c==0&&d==0)break;
        m=a-b;
        if(m<0)m=a-b+40;
        n=c-b;
        if(n<0)n=c-b+40;
        x=c-d;
        if(x<0)x=c-d+40;
        total=(m+n+x)*9+1080;
                printf("%d\n",total);
    }
    return 0;
}
