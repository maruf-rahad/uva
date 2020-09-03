#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,m,j;
    int ara[3010];
    int ara2[3010];
    while(scanf("%d",&n)==1){
            for(i=0;i<n;i++){
                printf("%d",&ara[i]);
                ara2[i]=0;
            }
            m=n-1;
            for(i=0;i<m;i++){
                ara2[abs(ara[i]-ara[i+1])]=1;
            }
            j=1;
            for(i=1;i<n;i++){
                if(!ara2[i]){
                    j=0;
                    break;
                }
            }
            if(j){
                printf("Jolly\n");
            }else{
            printf("Not jolly\n");
            }
    }
    return 0;
}
