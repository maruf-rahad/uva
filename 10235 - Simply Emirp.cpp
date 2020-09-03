#include<bits/stdc++.h>
using namespace std;
int ara[1000000];
int n=1000000;
void sieve()
{
    int i,j,a;
    ara[1]=1;
    for(i=4;i<=n;i+=2){
        ara[i]=1;
    }
    a=sqrt(n);
    for(i=3;i<=a;i+=2)
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
    int a,b,c,d,i,j,z;
    sieve();
    while(scanf("%d",&n)==1)
    {
        int flag=0,flag2=0;
        z=n;
        int ara2[20];
        for(i=0;i<20;i++){
            ara2[i]=0;
        }
        if(ara[z]==0){
            flag=1;
        }
        if(flag==1){
        int x=0;
        while(n!=0){
            ara2[x]=n%10;
            n=n/10;
            x++;
        }
        int sum=0;
        for(i=0;i<x;i++){
            sum=sum*10+ara2[i];
        }
        if(ara[sum]==0&&sum!=z){
            flag2=1;
        }
        }
        if(ara[z]==1){
            printf("%d is not prime.\n",z);
        }
        else if(flag==1&&flag2==1){
            printf("%d is emirp.\n",z);
        }
        else if(flag==1&&flag2==0){
            printf("%d is prime.\n",z);
        }

    }



return 0;
}
