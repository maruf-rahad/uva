#include<stdio.h>
#include<string.h>
int main()
{
    int t,sum,n,i,a;
    char ch[15];
    char str[5];
    int ara[120];
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        sum=0;
        for(i=1;i<=n;i++){
            scanf("%s",ch);

                if(strcmp(ch,"LEFT")==0){
                    sum+=-1;
                    ara[i]=-1;
                }else if(strcmp(ch,"RIGHT")==0){
                sum+=1;
                ara[i]=1;
                }else{
                scanf("%s %d",str,&a);
                sum+=ara[a];
                ara[i]=ara[a];
                }

        }
        printf("%d\n",sum);
    }
    return 0;
}
