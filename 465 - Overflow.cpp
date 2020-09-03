#include<bits/stdc++.h>
using namespace std;
char ch[1000];
int main()
{
   // freopen("output.txt","w",stdout);
    int flag,flag2,i;
    char n[1000],m[1000];
    double x = 2147483647;
    char str;
    double a,b;

    while(gets(ch))
    {
        printf("%s\n",ch);
        sscanf(ch,"%lf %c %lf",&a,&str,&b);
        flag = 0;
        flag2 = 0;


        if(a>x)
        {
            printf("first number too big\n");
        }
        if(b>x)
        {
            printf("second number too big\n");
            flag = 1;
        }
        if((str=='+'&&a+b>x)||(str=='*'&&a*b>x))
        {
            printf("result too big\n");
        }

    }












return 0;
}
