#include<stdio.h>
int main()
{
    char ch[100000];
    int i,a,flag,b,j;
    while( gets(ch)){
            flag=0;
            for(i=0;;i++){
                if(flag==0&&ch[i]!=' '){
                    flag=1;
                    a=i;
                }
                if((flag==1&&ch[i]==' ')||(flag==1&&ch[i]=='\0')){
                    b=i-1;
                    for(j=b;j>=a;j--){
                        printf("%c",ch[j]);
                    }
                    if(ch[i]=='\0')break;
                    flag=0;
            if(ch[i]==' ')printf(" ");
                }
            }
            printf("\n");
    }
    return 0;
}
