#include<bits/stdc++.h>
using namespace std;
int ara[10];
int n,flag,k;

void zero(int a,int b)
{
    int i,x,y;
    x = a;
    y = b;
    for(i=0; i<=9; i++)
    {
        ara[i] = 0;
    }
    int sum = 0,sub = 0;

    while(b>0)
    {
        ara[b%10]++;

        b = b/10;
        sum++;
    }
    if(sum>5)return;

    while(a>0)
    {
        ara[a%10]++;
        a = a/10;
        sum++;
    }
    if(x<10000)
    {
        ara[0]++;
        sum++;

    }

    for(i=0; i<=9; i++)
    {
        if(ara[i]==1)
        {
            sub++;
        }
    }


    if(sum==sub&&sum == 10)
    {
        flag = 1;

        printf("%d / ",y);
        if(x<10000)
        {
            printf("0");
        }
        printf("%d = %d\n",x,n);
    }




}
int main()
{
  //  freopen("input.txt","w",stdout);
    int a,b,i,j,x,y,z,sum;
    k = 0;

    while(scanf("%d",&n)==1&&n!=0)
    {
        flag = 0;
        if(k>0)
        {
            printf("\n");
        }

        for(i=1234; i<=98765; i++)
        {
            x = i;
            y = i*n;
            zero(x,y);


        }
        k++;
        if(flag==0)
        {
            printf("There are no solutions for %d.\n",n);
        }
    }







    return 0;
}
