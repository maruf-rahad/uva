#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100000];
    int i,n,a,b,length,m;
    while(scanf("%d",&n)==1)
    {
        if(n==0)break;
        scanf(" ");

        gets(ch);
        length=strlen(ch);
        m=length/n;
        a=0;
        b=m-1;

        while(b<=length)
        {
            for(i=b; i>=a; i--)
            {
                printf("%c",ch[i]);
            }
            a=a+m;
            b=b+m;

        }
        printf("\n");
    }
    return 0;
}
