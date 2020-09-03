#include<stdio.h>
#include<string.h>
int main()
{
    char ch[10000];
    int i,n,length;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%s",ch);
        length=strlen(ch);
        if((strcmp(ch,"1")==0)||(strcmp(ch,"4")==0)||(strcmp(ch,"78")==0)){
            printf("+\n");
        }else if(ch[length-1]=='5'||ch[length-2]=='3'){
        printf("-\n");
        }else if(ch[0]=='9'&&ch[length-1]=='4'){
        printf("*\n");
        }else if(ch[0]=='1'&&ch[1]=='9'||ch[2]=='0'){
        printf("?\n");
        }
    }
    return 0;
}
