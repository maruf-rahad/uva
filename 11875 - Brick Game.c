#include<stdio.h>
int main()
{
    int m,n,j,i,a;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&m);
        int ara[m];
        for(j=0; j<m; j++)
        {
            scanf("%d",&ara[j]);
        }
        a=j/2;
        printf("Case %d: %d\n",i,ara[a]);
    }
    return 0;
}
