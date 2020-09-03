#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[100],str[100],str2,ah,bh;
    int a,b,i,j,x,y,n,sum, flag2,flag3;
    scanf("%d%c",&n,&str2);
    for(i=1; i<=n; i++)
    {
        gets(ch);
        gets(str);
        x=strlen(ch);
        y=strlen(str);
        sum=0;
        b=0;
        flag3=0;
        flag2=0;
        if(x==y)
        {
            for(j=0; j<x; j++)
            {

                if(ch[j]=='a'||ch[j]=='e'||ch[j]=='i'||ch[j]=='o'||ch[j]=='u')
                {
                    b++;
                    if(str[j]=='a'||str[j]=='e'||str[j]=='i'||str[j]=='o'||str[j]=='u')
                    {

                            sum=sum+1;
                    }
                    else{
                        flag2=2;
                        break;
                    }
                }
                else
                {
                    ah=ch[j];
                    bh=str[j];
                    if(ah!=bh){
                       flag3=1;
                       break;
                }
                }
            }
        }
        if(b==sum&&x==y&&flag3==0&&flag2==0)
        {
            printf("Yes\n");
        }
        else if(b!=sum||x!=y||flag3==1||flag2==1)
        {
            printf("No\n");
        }
    }
    return 0;
}
