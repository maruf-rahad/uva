#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i,j,n,k,length,flag,flag2;
    scanf("%d",&n);
    char ch[10];
    for(k=1; k<=n; k++)
    {
        int flag3=0;
        for(i=0; i<5; i++)
        {
            scanf("%s",&ch);
            flag=0;
            flag2=0;
            if(flag3==0)
            {
                for(j=0; j<5; j++)
                {
                    if(ch[j]=='|')
                    {
                        flag=1;
                    }
                    if(flag==1&&ch[j]=='>')
                    {
                        flag3=1;
                        break;
                    }
                    if(ch[j]=='<')
                    {
                        flag2=1;
                    }
                    if(flag2==1&&ch[j]=='|')
                    {
                        flag3=1;
                        break;
                    }
                }
            }
        }
        char str;
        scanf("%c",&str);
        if(flag3==1)
        {
            printf("Case %d: No Ball\n",k);
        }
        else
        {
            printf("Case %d: Thik Ball\n",k);
        }
    }



    return 0;
}
