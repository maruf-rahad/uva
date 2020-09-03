#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("input.txt","w",stdout);

    int n,i,j,m,k;
    double s,a,b,c,sum;
    double ara[100000];

    scanf("%d",&m);

    for(k=1; k<=m; k++)
    {

        scanf("%d",&n);

        for(i=0; i<n; i++)
        {
            scanf("%lf",&ara[i]);

        }




        sort(ara,ara+n);
        int flag = 0;
        double total = 0;

        for(i=n-1; i>1; i--)
        {
            if(ara[i]<(ara[i-1]+ara[i-2]))
            {
                a = ara[i];
                b = ara[i-1];
                c = ara[i-2];
                s = (a+b+c)/2.0;
                sum = sqrt(s*(s-a)*(s-b)*(s-c));
                flag = 1;
                if(sum>total)
                {
                    total = sum;
                }


            }
              //printf("yes\n");

        }


        if(flag==1)
        {
         printf("%0.2f\n",total);
        }
        else
        {
            printf("0.00\n");
        }


    }


    return 0;
}
