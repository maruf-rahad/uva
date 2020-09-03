#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,a,j,c,d;
    j=1;
    while(scanf("%d",&a)==1&&(a>=0))
    {
        if(a==1)
        {
            printf("Case %d: 0\n",j);
        }
        for(i=0; i<14; i++)
        {
            c=pow(2,i);
            d=pow(2,i+1);
            if(a>c&&a<=d)
            {
                printf("Case %d: %d\n",j,i+1);
                break;
            }
        }
        j+=1;
    }
    return 0;
}
