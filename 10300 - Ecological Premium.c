#include<stdio.h>
int main()
{
    long long n,m,a,b,c,i,j,total,sum;

    while(scanf("%lld",&n)==1)
    {
        for(i=1; i<=n; i++)
        {
            total=0;
            scanf("%lld",&m);
            for(j=1; j<=m; j++)
            {
                scanf("%lld %lld %lld",&a,&b,&c);
                sum=(a*c);
                total=total+sum;
            }
            printf("%lld\n",total);
        }
    }
    return 0;
}
