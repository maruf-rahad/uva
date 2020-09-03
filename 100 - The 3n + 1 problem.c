#include<stdio.h>
int main()
{
    int a,b,temp,i,j,count,sum;
    while(scanf("%d %d",&a,&b)==2&&a>0&&b>0){
            sum=0;
            printf("%d %d ",a,b);
        if(a>b){
            temp=a;
            a=b;
            b=temp;
        }
        for(i=a;i<=b;i++){
                j=i;
                count=1;
            while(j!=1){
                    if(j%2==0){
                        j=j/2;
                    }else{
                    j=3*j+1;
                    }
                count=count+1;
            }
            if(count>=sum){
                sum=count;
            }
        }
        printf("%d\n",sum);
    }
    return 0;

}
