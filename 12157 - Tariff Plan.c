#include<stdio.h>
int main()
{
    int t,n,mile,juice,b,a;
    b=1;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        mile=0;
        juice=0;
        while(n--){
                scanf("%d",&a);
        mile+=((a/30)+1)*10;
            juice+=((a/60)+1)*15;
        }
        if(mile<juice){
            printf("Case %d: Mile %d\n",b,mile);
        }else if(juice<mile){
        printf("Case %d: Juice %d\n",b,juice);
        }else{
        printf("Case %d: Mile Juice %d\n",b,mile);
        }
        b+=1;
    }
    return 0;
}
