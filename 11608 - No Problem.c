#include<stdio.h>
int main()
{
    int ara[12];
    int ara2[13];
    int i,sum,a,c,j;
    j=1;
    while(scanf("%d",&a)==1&&a>=0)
    {
        ara[0]=a;
        for(i=1; i<=12; i++)
        {
            scanf("%d",&ara[i]);
        }
        for(i=0; i<12; i++)
        {
            scanf("%d",&ara2[i]);
        }
        printf("Case %d:\n",j);
        for(i=0; i<12; i++)
        {
            if(ara[i]>=ara2[i])
            {
                printf("No problem! :D\n");
                c=ara[i]-ara2[i];
                ara[i+1]=ara[i+1]+c;
            }
            else
            {
                printf("No problem. :(\n");
                ara[i+1]=ara[i]+ara[i+1];
            }
        }
        j+=1;


    }
    return 0;

}
