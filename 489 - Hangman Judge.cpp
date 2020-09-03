#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,c,d,i,j,z,length,length2;
    char ch[20000],str[20000],str2[20000];
    b=1;
    while(scanf("%d",&n)==1)
    {
        if(n==-1)break;
        scanf("%s",&ch);
        scanf("%s",&str);
        strcpy(str2,ch);
        length=strlen(ch);
        length2=strlen(str);

        int flag,sum=0;
        int flag2=0;
        int total=0;
        printf("Round %d\n",n);
        for(i=0; i<length2; i++)
        {
            flag=0;
            for(j=0; j<length; j++)
            {
                if(str[i]==ch[j])
                {
                    flag=1;
                    if(str2[j]!='0')
                    {
                        str2[j]='0';
                        total+=1;
                        if(total==length&&flag2!=1)
                        {
                            flag2=2;
                            printf("You win.\n");
                            break;
                        }
                    }
                }
            }
            if(flag==0)
            {
                sum=sum+1;
                if(sum==7&&flag2!=2)
                {

                    printf("You lose.\n");
                    flag2=1;
                    break;
                }
            }
        }

    if(flag2==0)
    {
        printf("You chickened out.\n");
    }
    }

return 0;
}
