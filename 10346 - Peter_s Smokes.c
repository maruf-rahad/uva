#include<stdio.h>
int main()
{
    int n,k,a;
    while(scanf("%d %d",&n,&k)==2&&k>0)
    {
        a=n;
        while(n>=k)
        {
            a=a+n/k;
            n=n/k+n%k;
        }
        printf("%d\n",a);

    }
    return 0;
}
