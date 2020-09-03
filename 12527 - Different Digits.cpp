#include<bits/stdc++.h>
using namespace std;
int main()
{
     int ara[10];
     int a,b,i,j,sum,temp,flag,s,k,x;
     while(scanf("%d %d",&a,&b)==2){
        if(a>b){
            temp=a;
            a=b;
            b=temp;
        }
        sum=0;
        for(i=a;i<=b;i++){
                s=i;
                j=0;
                flag=0;
                for(k=0;k<10;k++){
                        ara[k]=0;
                }
        while(s>0){
            x=s%10;
                ara[x]++;
                s=s/10;
        }
        for(k=0;k<10;k++){
            if(ara[k]>1){
                    flag=1;
        }
        }
        if(flag==0){
            sum=sum+1;
        }
        }
        printf("%d\n",sum);
     }

return 0;
}
