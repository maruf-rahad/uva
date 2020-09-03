#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("output.txt","w",stdout);
    char s[1000],str,ch[1000];
    long long n,a,b,i,j,x,y,sum;

    double xx,yy;

    while(gets(s))
    {
        sscanf(s,"%s %c %lld",&ch,&str,&n);

        if(str=='%')
        {
            sum = 0;
            for(i=0;i<strlen(ch);i++)
            {
                sum = (sum*10+(ch[i]-'0'))%n;
            }
            printf("%lld\n",sum);
        }
        else{
            int flag = 0;
             sum = 0;
            for(i=0;i<strlen(ch);i++)
            {
                sum = sum*10+ch[i]-'0';
                if(sum>=n)
                {
                    flag = 1;
                    printf("%lld",sum/n);
                    sum = sum%n;
                }
                else if(flag==1){
                    printf("0");
                }
            }
            if(flag==0)printf("0");

            printf("\n");

        }
    }















return 0;
}
