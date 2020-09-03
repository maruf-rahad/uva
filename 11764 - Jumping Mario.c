#include<stdio.h>
int main()
{
    int n,i,sum,value,m,j;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        sum=0;
        value=0;
        scanf("%d",&m);
        int ara[m];
        for(j=0; j<m; j++)
        {
            scanf("%d",&ara[j]);
        }
        for(j=0; j<m-1; j++)
        {
            if(ara[j]>ara[j+1])
            {
                sum=sum+1;
            }
            if(ara[j]<ara[j+1])
            {
                value=value+1;
            }
        }
        printf("Case %d: %d %d\n",i,value,sum);

    }
    return 0;
}
