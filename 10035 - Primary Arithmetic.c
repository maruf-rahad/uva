#include<stdio.h>
int main()
{
    unsigned long int a,b,x,y,c;
    int carry;
    while(scanf("%lu %lu",&a,&b)==2)
    {
        carry=0;
        x=a%10;
        y=b%10;
        c=(x+y)%10;
        if(c<x&&c<y)
        {
            carry=carry+1;
        }
    if(carry==0)
    {
        printf("No carry operation.\n");
    }
    else
    {
        printf("%d carry operations.\n",carry);
    }
    }
    return 0;
}
