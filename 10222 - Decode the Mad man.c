#include<stdio.h>
int main()
{
    char ch[100000];
    int i;
    gets(ch);
    for(i=0;ch[i]!=0;i++){
        printf("%c",ch[i]-3);
    }
    printf("\n");
    return 0;
}
