#include<bits/stdc++.h>
using namespace std;
int ara[10010];
int main()
{
    int n,a,b,i,j,sum;
    while(scanf("%d",&n)==1 && n>0)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
        }
        sum = 0;
        b = -10;
        for(i=1;i<=n;i++)
        {
           sum = sum + ara[i];
           if(sum<=0)
           {
               sum = 0;
           }
           if(sum>b)
           {
               b = sum;
           }
        }
        if(b>0)
        {
            printf("The maximum winning streak is %d.\n",b);
        }
        else
        {
            printf("Losing streak.\n");
        }

    }






return 0;
}
