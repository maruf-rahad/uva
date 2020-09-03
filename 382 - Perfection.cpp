#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a,sum,j,b;
    int ara[100];
    for(i=0;i<100;i++){
        scanf("%d",&ara[i]);
        if(ara[i]==0)break;
        a=i;
    }
    printf("PERFECTION OUTPUT\n");
    for(i=0;i<=a;i++){
            sum=0;
            b=ara[i]/2;
        for(j=1;j<=b;j++){
                if(ara[i]%j==0){
                        sum=sum+j;

            }
        }
        if(ara[i]<=9){
            printf("    ");
        }else if(ara[i]<=99)printf("   ");
        else if(ara[i]<=999)printf("  ");
        else if(ara[i]<=9999)printf(" ");
            else if(ara[i]<=60000)printf("");
            if(sum<ara[i])printf("%d  DEFICIENT\n",ara[i]);
            else if(ara[i]==sum)printf("%d  PERFECT\n",ara[i]);
            else{
                printf("%d  ABUNDANT\n",ara[i]);
            }
    }
    printf("END OF OUTPUT\n");

    return 0;
}
