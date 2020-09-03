#include<bits/stdc++.h>
using namespace std;
char ch[1120];
int main()
{
    int a,b,i,j,x,y,l;
    while(scanf("%s",&ch))
    {
        if(strcmp(ch,"0")==0)break;

        l = strlen(ch);
        x = 0;
        y = 0;

        for(i=0;i<l;i++)
        {
            if(i%2==0)
            {
                x+=ch[i]-'0';
            }
            else{
                y+=ch[i]-'0';
            }
        }
        if((abs(x-y))%11==0)
        {
            printf("%s is a multiple of 11.\n",ch);
        }
        else{
            printf("%s is not a multiple of 11.\n",ch);
        }

    }








return 0;
}
