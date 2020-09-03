#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
    while(n!=0)
    {
        int a = n%10;
        printf("%d",a);
        n=n/10;
    }


}
int main()
{
    char ch[200];
    int i,sum;

    while(gets(ch))
    {
        int l = strlen(ch);

        for(i=l-1;i>=0;i--)
        {
            if(ch[i]=='1')
            {
                sum = ch[i]-'0';
                i--;
                sum = sum*10+ch[i]-'0';
                i--;
                sum = sum*10+ch[i]-'0';
                printf("%c",sum);
            }
            else if(ch[i]>='0'&&ch[i]<='9')
            {
                sum = ch[i]-'0';
                i--;
                sum = sum*10+ch[i]-'0';

               printf("%c",sum);

            }
            else
            {
                int a = ch[i];
                print(a);
            }
        }
        printf("\n");
    }








return 0;
}
