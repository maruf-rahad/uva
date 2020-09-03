#include<stdio.h>
int main()
{
    int n,i,a,b,c,total,j;
    j=1;
    while(scanf("%d",&n))
    {
        if(n==0)
        {
            break;
        }
        b=0;
        c=0;
        for(i=1; i<=n; i++)
        {
            scanf("%d",&a);
            if(a>0)
            {
                b=b+1;
            }
            else
            {
                c=c+1;
            }
        }
        total=b-c;
        printf("Case %d: %d\n",j,total);
        j=j+1;
    }
    return 0;
}
