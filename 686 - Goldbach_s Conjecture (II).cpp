#include<bits/stdc++.h>
using namespace std;
int ara[33000];
int n=33000;
void sieve()
{
    int i,j,s;
    ara[1]=1;
    for(i=4;i<=n;i+=2)
    {
        ara[i]=1;
    }
    s=sqrt(n);
    for(i=3;i<=s;i+=2)
    {
        if(ara[i]==0){
            for(j=i*i;j<=n;j+=i)
            {
                ara[j]=1;
            }
        }
    }
}
int main()
{
    int a,b,i,j,sum,n;
    sieve();
    while(scanf("%d",&n)==1){
            if(n==0)break;
    a=n/2;
    sum=0;
    for(i=1;i<=a;i++){
        if(ara[i]==0&&ara[n-i]==0){
            sum=sum+1;
        }
    }
    printf("%d\n",sum);
    }


return 0;
}
