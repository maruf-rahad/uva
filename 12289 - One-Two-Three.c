#include<stdio.h>
#include<string.h>
int main()
{
    char str[10],ch;
    int n,length,i,sum;
    scanf("%d%c",&n,&ch);
    for(i=1;i<=n;i++){
            sum=0;
        gets(str);
        length=strlen(str);
        if(length==5){
            printf("3\n");
        }else{
        if(str[0]=='o')sum++;
        if(str[1]=='n')sum++;
        if(str[2]=='e')sum++;

        if(sum>=2){
            printf("1\n");
        }else{
        printf("2\n");
        }
        }
    }
    return 0;
}
