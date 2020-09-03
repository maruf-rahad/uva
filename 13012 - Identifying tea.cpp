#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum,i;
    int ara[5];
    while(scanf("%d",&n)==1){
            sum=0;
            for(i=0;i<5;i++){
                scanf("%d",&ara[i]);
            }
            for(i=0;i<5;i++){
                if(ara[i]==n){
                    sum=sum+1;
                }
            }
            printf("%d\n",sum);
    }
return 0;
}
