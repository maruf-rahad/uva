#include<stdio.h>
int main()
{
    int n,i,j,max;
    char ch[200][200];
    int ara[100];
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        max=-200;

        for(j=0; j<10; j++)
        {
            scanf("%s %d",ch[j],&ara[j]);
            if(max<ara[j])
            {
                max=ara[j];
            }
        }
        printf("Case #%d:\n",i);
        for(j=0; j<10; j++)
        {
            if(ara[j]==max)
            {
                printf("%s\n",ch[j]);
            }
        }
    }
    return 0;
}
