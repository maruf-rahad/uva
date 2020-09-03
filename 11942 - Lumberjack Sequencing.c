#include<stdio.h>
int main()
{
    int ara[10];
    int n,i,min,max,a,flag1,flag2,j;
    scanf("%d",&n);
    printf("Lumberjacks:\n");
    for(i=1;i<=n;i++){
            flag1=1;
            flag2=1;
            for(j=0;j<10;j++){
                scanf("%d",&ara[j]);
            }
                for(j=0;j<9;j++){
                    if(ara[j]<=ara[j+1])flag1=0;
                    if(ara[j]>ara[j+1])flag2=0;

            }
            if(flag1!=flag2){
                printf("Ordered\n");
            }else{
            printf("Unordered\n");
            }
    }
    return 0;
}
