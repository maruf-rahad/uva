#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("input.txt","w",stdout);
    int n,a,b,i,j,x,y,c,f1,f2,f3,f4,f5,f6,f7,f8;

    while(scanf("%d",&n)==1)
    {
        if(n==2)
        {
            for(i=0;i<=99;i++)
            {
                a = i;

                b = a%10;
                a = a/10;

                c = a%10;
                if((b+c)*(b+c)==i)
                {
                    printf("%d%d\n",c,b);
                }
            }
        }
        if(n==4)
        {
            for(i=0;i<=9999;i++)
            {
                a = i;
                f1 = a%10;
                a = a/10;
                f2 = a%10;
                a = a/10;
                f3 = a%10;
                a = a/10;
                f4 = a%10;

                x = f2*10+f1;
                y = f4*10+f3;

                if((x+y)*(x+y)==i)
                {
                    printf("%d%d%d%d\n",f4,f3,f2,f1);
                }



            }
        }
        if(n==6)
        {
            printf("000000\n000001\n");
            for(i=50000;i<=999999;i++)
            {
                a = i;
                f1 = a%10;
                a = a/10;
                f2 = a%10;
                a = a/10;
                f3 = a%10;
                a = a/10;
                f4 = a%10;
                a = a/10;
                f5 = a%10;
                a = a/10;
                f6 = a%10;

                x = f3*100+f2*10+f1;
                y = f6*100+f5*10+f4;

                if((x+y)*(x+y)==i)
                {
                    printf("%d%d%d%d%d%d\n",f6,f5,f4,f3,f2,f1);
                }



            }
        }
         if(n==8)
        {
            printf("00000000\n00000001\n");
            for(i=4000000;i<=99999999;i++)
            {
                a = i;
                f1 = a%10;
                a = a/10;
                f2 = a%10;
                a = a/10;
                f3 = a%10;
                a = a/10;
                f4 = a%10;
                a = a/10;
                f5 = a%10;
                a = a/10;
                f6 = a%10;
                a = a/10;
                f7 = a%10;
                a = a/10;
                f8 = a%10;

                x = f4*1000+f3*100+f2*10+f1;
                y = f8*1000+f7*100+f6*10+f5;

                if((x+y)*(x+y)==i)
                {
                    printf("%d%d%d%d%d%d%d%d\n",f8,f7,f6,f5,f4,f3,f2,f1);
                }



            }
        }
    }









return 0;
}
