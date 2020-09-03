#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,i,j,n,x,y,sum;
    long long ara[20];
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        scanf("%lld",&a);
        y=0;
        b=a;
        while(1){
            x=0;
    while(a!=0){
        ara[x]=a%10;
        a=a/10;
        x++;
    }
        sum=0;
    for(j=0;j<x;j++){
        sum=sum*10+ara[j];
    }
    if(sum==b)
    {
        break;
    }
    else {
            a=sum+b;
            b=a;
    y++;
        }

        }

        printf("%lld %lld\n",y,sum);

    }



return 0;
}
