#include<stdio.h>
#include<string.h>
int main()
{
    char ch[1000050];
    int a,b,i,j,temp,flag,n;
    j=1;
    while(scanf("%s",ch)==1){
        if(strcmp(ch,"\n")==0)break;
            scanf("%d",&n);
            printf("Case %d:\n",j);
        while(n--){
            scanf("%d %d",&a,&b);
            if(a>b){
                temp=a;
                a=b;
                b=temp;
            }
            if(a==b){
                    printf("Yes\n");
            continue;
            }
            for(i=a;i<b;i++){
                if(ch[i]==ch[i+1])flag=0;
                else{
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                    printf("Yes\n");
            }else{
            printf("No\n");
            }
        }
        j+=1;
    }
    return 0;
}
