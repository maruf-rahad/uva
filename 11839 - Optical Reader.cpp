#include<bits/stdc++.h>
using namespace std;
int main()
{
        int a,b,c,d,i,j,sum,x,y,n;
        char ch[5]={'A','B','C','D','E'};
        int ara[6];
        while(scanf("%d",&n)==1)
        {
            if(n==0)break;
            for(i=1;i<=n;i++){
                for(j=1;j<=5;j++)
                {
                    scanf("%d",&ara[j]);
                }
                   sum=0;
                for(j=1;j<=5;j++){
                    if(ara[j]<=127){
                        sum=sum+1;
                        a=j-1;
                    }
                }
                if(sum==1)
                {
                    printf("%c\n",ch[a]);
                }
                else
                {
                printf("*\n");
                }

            }

        }

return 0;
}
