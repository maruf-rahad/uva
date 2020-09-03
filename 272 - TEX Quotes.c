#include<stdio.h>
int main()
{
    char ch[10000];
    int flag,i,length;
    flag=0;
    while(gets(ch))
    {
        for(i=0; ch[i]!=0; i++)
        {
            if(flag==0&&ch[i]=='"')
            {
                printf("``");
                flag=1;
            }
            else if(flag==1&&ch[i]=='"')
            {
                printf("''");
                flag=0;
            }
            else
            {
                printf("%c",ch[i]);
            }

        }
        printf("\n");
    }
    return 0;
}
