#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,sum,s,i,j,sub,c;
    while(scanf("%d",&n)==1){
        if(n==0)break;
        int ara[n+1];
        int ara2[n+1];
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                ara[j]=0;
                ara2[j]=0;
            }
        }
        for(i=1;i<=n;i++){
                sum=0;
            for(j=1;j<=n;j++){
                scanf("%d",&a);
                ara2[j]=ara2[j]+a;
        sum=sum+a;
            }
            ara[i]=sum;
        }
        sum=0;
        sub=0;
        for(i=1;i<=n;i++){
                if(ara[i]%2==1){
                    sum=sum+1;
                        b=i;
                }
                if(ara2[i]%2==1){
                        sub=sub+1;
                c=i;

                }
        }
        if(sum==0&&sub==0){
            printf("OK\n");
        }else if(sum==1&&sub==1){
            printf("Change bit (%d,%d)\n",b,c);
        }else{
        printf("Corrupt\n");
        }

    }
return 0;
}
