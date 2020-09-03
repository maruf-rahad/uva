#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch,str,ch2;
    char s[10];
    int a,b,i,tot;
          tot = 0;
    while(scanf("%d%c%d%c%s",&a,&ch,&b,&str,&s)==5)
    {



        if(strcmp(s,"?")!=0)
        {
            int sum = 0;
            for(i=0;i<strlen(s);i++)
            {
                sum = sum*10+s[i]-'0';
            }


            if(ch=='+'&&a+b==sum){
                    tot++;
            }
            else if(ch=='-'&&a-b==sum)
            {
                tot++;
            }

        }
    }
    printf("%d\n",tot);








return 0;
}
