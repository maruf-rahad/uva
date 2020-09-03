#include<bits/stdc++.h>
using namespace std;
int ara[1000000];
int n=1000000;
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
            for(j=i*i;j<=n;j+=i){
                ara[j]=1;
            }
        }
    }
}
int main()
{
    int a,b,i,j,x,y;
    sieve();
    while(scanf("%d",&a)==1)
    {
        if(a==0)break;
        int flag=0;
        printf("%d:\n",a);
        for(i=1;i<=a/2;i++)
        {
            if(ara[i]==0&&ara[a-i]==0){
                flag=1;
                x=i;
                y=a-i;
                break;
            }
        }
        if(flag==1){
            printf("%d+%d\n",x,y);
        }
        else{
            printf("NO WAY!\n");
        }
    }



return 0;
}
