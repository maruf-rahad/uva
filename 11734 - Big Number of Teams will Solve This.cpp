#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","w",stdout);
    int n,i,j=0,sum,length1,length2;
    char ch[1000],ch2[1000],str;
        scanf("%d",&n);
        scanf("%c",&str);
        while(n--)
        {
            int flag = 0,flag2=0;
            j++;
            sum = 0;
        gets(ch);
        gets(ch2);
        length1 = strlen(ch);
        length2 = strlen(ch2);
        if(strcmp(ch,ch2)==0)
        {
            printf("Case %d: Yes\n",j);
            flag = 1;
        }
        if(flag==0)
        {

            int x = 0,y = 0,a = 0,b = 0;

            while(1)
            {
                if(x==length1||y==length2)break;

                if(ch[x]==' '){
                    x++;
                a++;
                continue;
                }
                else if(ch2[y]==' ')
                {
                    y++;
                    b++;
                    continue;
                }
               else if(ch[x]!=ch2[y]){
                    flag2 = 1;
                    break;
                }
                else{
                    x++;
                    y++;
                }

            }
            for(i=x;i<length1;i++)
            {
                if(ch[i]!=' ')flag2=1;
            }
            for(i=y;i<length2;i++)
            {
                if(ch2[i]!=' ')flag2=1;
            }

            if(flag2==0)
            {
                printf("Case %d: Output Format Error\n",j);
            }
            else{
                printf("Case %d: Wrong Answer\n",j);
            }

        }

        }
return 0;
}
