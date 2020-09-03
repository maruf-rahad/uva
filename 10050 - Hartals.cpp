#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[3655];
    int n,a,b,c,d,x,y,i,j,k,sum;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            sum=0;
        scanf("%d %d",&a,&b);
        for(j=1;j<=a;j++){
            ara[j]=0;
        }
        int ara2[b+1];
        for(j=1;j<=b;j++){
            scanf("%d",&ara2[j]);
        }
        x=6;
        for(k=1;k<=a;k++){
        for(j=1;j<=b;j++){
                if(k%7==0){
                break;
                }
                if(k==x){
                        x=x+7;
                        break;
                }

                if(k%ara2[j]==0&&ara[k]==0){
                    ara[k]=1;
                    sum=sum+1;
                }
            }
        }
        printf("%d\n",sum);
    }


return 0;
}
