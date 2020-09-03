#include<stdio.h>
int main()
{
    int n,i,sum,c,j,a;
    j=1;
    while(scanf("%d",&n)==1){
        if(n==0)break;
        int ara[n];
        sum=0;
        for(i=0;i<n;i++){
            scanf("%d",&ara[i]);
            sum+=ara[i];
        }
        c=0;
        a=sum/n;
        for(i=0;i<n;i++){
            if(a>ara[i]){
                c+=a-ara[i];
            }
        }
        printf("Set #%d\n",j);
        printf("The minimum number of moves is %d.\n\n",c);
        j+=1;
    }
    return 0;
}
