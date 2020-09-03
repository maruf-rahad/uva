#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,a,b,i,j,sum,c,k,s;
    char ch[4],str;
    scanf("%d%c",&n,&str);
    for(k=1;k<=n;k++)
    {
        sum = 0;

        for(i=1;i<=3;i++)
        {
              b = 1;
            scanf(" %c",&str);
            a = str-65;
            for(j=3;j>i;j--)
            {
                b = b*26;
            }
            sum+=a*b;
        }
        scanf("%c%d",&str,&s);
        c = abs(sum-s);
        if(c<=100)
        {
            printf("nice\n");
        }
        else{
            printf("not nice\n");
        }


    }
return 0;
}
