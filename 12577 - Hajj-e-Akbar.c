#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    int i,length,j,total;
    i=0;
    while(1)
    {
        scanf("%s",&ch);
        length=strlen(ch);
        total=0;
        for(j=0;j<length;j++){
                total=total+ch[j];
        }
        if(total==42)
        {
            break;
        }
        i=i+1;
        if(total==381)
        {
            printf("Case %d: Hajj-e-Akbar\n",i);
        }
        else if(total==509)
        {
            printf("Case %d: Hajj-e-Asghar\n",i);
        }
    }
    return 0;
}
