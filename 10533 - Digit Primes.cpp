#include<bits/stdc++.h>
using namespace std;
#define mx 10010
int ara[mx];
int ara2[mx];
void sieve()
{
    long long i,j;
    ara[1] = 1;

    for(i=4; i<mx-5; i+=2)
        ara[i] = 1;

    for(i=3; i<=mx-5; i+=2)
    {
        if(ara[i]==0)
        {
            for(j = i*i; j<=mx-5; j+=2*i)
                ara[j] = 1;
        }
    }
}
void make()
{
    int i,j,a,b,sum,s;

    for(i=1; i<=mx-5; i++)
    {
        if(ara[i]==0)
        {
            s = i;
            sum = 0;

            while(s!=0)
            {
                sum += s%10;
                s = s/10;
            }
            if(ara[sum]==0)
            {
                ara2[i] = ara2[i-1]+1;
            }
            else{
                ara2[i] = ara2[i-1];
            }

        }
        else
        {
             ara2[i] = ara2[i-1];
        }
    }


}
int main()
{
    int i,j,a,b,sum,t;

    sieve();
    make();

   // for(i=1; i<=100; i++)
     //   printf("%d %d\n",i,ara2[i]);

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&a,&b);

        if(ara2[a]!=ara2[a-1])
        {
            printf("%d\n",ara2[b]-ara2[a]+1);
        }
        else{
            printf("%d\n",ara2[b]-ara2[a]);
        }
    }










    return 0;
}
