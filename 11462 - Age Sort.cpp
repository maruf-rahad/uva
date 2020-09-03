#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[101];
    int a,b,i,j,x,y,n;
    while(scanf("%d",&n)==1){
            if(n==0)break;
        for(i=1;i<=100;i++){
            ara[i]=0;
        }
        for(i=1;i<=n;i++){
            scanf("%d",&a);
            ara[a]++;
        }
        for(i=1;i<=n;i++){
            if(ara[i]>0){
                printf("%d",i);
                ara[i]--;
                a=i;
                break;
            }
        }
        for(i=a;i<=100;i++){
            while(ara[i]!=0){
                printf(" %d",i);
                ara[i]--;
            }
        }
        printf("\n");
    }


return 0;
}
