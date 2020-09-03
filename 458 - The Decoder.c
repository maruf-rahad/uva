#include<stdio.h>
int main()
{
    int i;
    char ch[100000];

    while(gets(ch)){
    for(i=0;ch[i]!=0;i++){
        printf("%c",ch[i]-7);
    }
    printf("\n");
    }
    return 0;
}
