#include<stdio.h>
int main()
{
    int n,i,max,t,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        int ara[n];
        for(j=0;j<n;j++){
            scanf("%d",&ara[j]);
        }
        max=ara[0];
        for(j=0;j<n;j++){
                if(max<ara[j]){
                    max=ara[j];
                }
        }
        printf("Case %d: %d\n",i,max);
    }
    return 0;
}
