#include<stdio.h>
int main()
{
    int t,n,i,j,temp,k,total,a,sum,b,c;
    scanf("%d",&t);
    for(k=1;k<=t;k++){
        scanf("%d",&n);
        int ara[n];
        total=0;
        sum=0;
        for(i=0;i<n;i++){
            scanf("%d",&ara[i]);
        }
        for(i=0;i<n;i++){
            total=total+ara[i];
        }
        a=total/n;
        for(i=0;i<n-1;i++){
            for(j=0;j<n-1;j++){
                if(ara[j]>ara[j+1]){
                    temp=ara[j];
                    ara[j]=ara[j+1];
                    ara[j+1]=temp;
                }
            }
        }
        sum=a-ara[0];
        for(i=0;i<n-1;i++){
            b=ara[i]-ara[i+1];
            if(b<0){
                b=b*(-1);
            }
            sum=sum+b;

        }
        c=ara[n-1]-a;
        if(c<0){
            c=c*(-1);
        }
        printf("%d\n",sum+c);


    }
    return 0;
}
