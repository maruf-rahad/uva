#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j,sum,n,m;
    int ara[103];
    while(scanf("%d %d",&n,&m)==2){
        for(i=1;i<=102;i++){
            ara[i]=0;
        }
        sum=0;
        for(i=1;i<=n;i++){
            scanf("%d %d",&a,&b);
            if(a>b){
                sum=sum+3;
            }else if(a==b){
            if(m>0){
                sum=sum+3;
                m--;
            }else{
            sum=sum+1;
            }
            }else{
            ara[b-a]++;
            }
        }
        if(m>0){
        for(i=1;i<102;i++){
                while(m>=i&&ara[i]>0){
                    if(m>i){
                        sum=sum+3;
                         m=m-i-1;
                    }else{
                    sum=sum+1;
                    m=m-i;
                    }
                    ara[i]--;
                }
        }
        }
        printf("%d\n",sum);
    }
    return 0;
}
