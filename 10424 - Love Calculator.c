#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    char str2[100];
    int i,length1,length2,sum,sum2,a,b;
    float c,x,y;
    while(gets(str1))
    {
        gets(str2);
        sum=0;
        sum2=0;
        length1=strlen(str1);
        length2=strlen(str2);
        for(i=0; i<length1; i++)
        {
            if(str1[i]>='a'&&str1[i]<='z')
            {
                sum+=str1[i]-96;
            }
            else if(str1[i]>='A'&&str1[i]<='Z')
            {
                sum+=str1[i]-64;
            }
        }
        for(i=0; i<length2; i++)
        {
            if(str2[i]>='a'&&str2[i]<='z')
            {
                sum2+=str2[i]-96;
            }
            else if(str2[i]>='A'&&str2[i]<='Z')
            {
                sum2+=str2[i]-64;
            }
        }
        a=0;

        while(sum!=0)
        {
            a+=sum%10;
            sum=sum/10;
        }
        if(a>9)
        {
            a=a/10+a%10;
        }
        b=0;
        while(sum2!=0)
        {
            b+=sum2%10;
            sum2=sum2/10;
        }
        if(b>9)
        {
            b=b/10+b%10;
        }
        x=a;
        y=b;
        if(x<=y)c=(x/y)*100;
        else c=(y/x)*100;
        printf("%0.2f %%\n",c);

    }

    return 0;
}
