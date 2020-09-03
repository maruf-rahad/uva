#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,flag,sum,i,j,temp;
    while(scanf("%d",&n)==1){
        int ara[n];
        for(i=0;i<n;i++){
            scanf("%d",&ara[i]);
        }
        sum=0;
        for(i=0;i<n-1;i++){
                flag=0;
            for(j=0;j<n-1;j++){
                if(ara[j]>ara[j+1]){
                            sum=sum+1;
                    flag=1;
                    temp=ara[j];
                    ara[j]=ara[j+1];
                    ara[j+1]=temp;
                }
            }
        }
        printf("Minimum exchange operations : %d\n",sum);
    }

    return 0;
}
