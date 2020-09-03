#include<stdio.h>
int main()
{
    int n,i,sum,a,b,s,j;
    int ara[10];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        for(j=0;j<10;j++){
            ara[j]=0;
            }
        for(j=1;j<=a;j++){
        s=j;
        while(s>0){
                b=s%10;
        ara[b]++;
        s=s/10;

        }
        }
        printf("%d %d %d %d %d %d %d %d %d %d\n",ara[0],ara[1],ara[2],ara[3],ara[4],ara[5],ara[6],ara[7],ara[8],ara[9]);
    }
    return 0;
}
