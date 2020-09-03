#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    char ch[10];
    long long sum,a;
    sum=0;
    for(i=1; i<=n; i++)
    {
        scanf("%s",ch);
        if(strcmp(ch,"donate")==0)
        {
            scanf("%lld",&a);
            sum=sum+a;
        }
        else if(strcmp(ch,"report")==0)
        {
            printf("%lld\n",sum);
        }
    }
    return 0;
}
