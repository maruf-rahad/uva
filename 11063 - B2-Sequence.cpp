#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","w",stdout);
    char str;
    int n,a,b=1,i,j,sum,flag;
    while(scanf("%d",&n)==1)
    {


            int ara[20020];
            int ara2[20020];
            flag = 0;
            for(i=0;i<=20015;i++)
            {
                ara2[i]=0;
            }

            scanf("%d",&a);
            ara[1] = a;
            if(ara[1]<1){
                flag = 1;

            }
            for(i=2;i<=n;i++)
            {
                scanf("%d",&ara[i]);
                if(ara[i]<=ara[i-1]){
                    flag = 1;

                }
            }
            scanf("%c%c",&str,&str);
            for(i=1;i<=n;i++)
            {
                for(j=i;j<=n;j++)
                {

                        sum = ara[i]+ara[j];

                        ara2[sum]++;

                }
            }

            for(i=1;i<=20015;i++)
            {
                if(ara2[i]>1)
                {
                    flag = 1;

                }
            }
            if(flag == 1)
            {
                printf("Case #%d: It is not a B2-Sequence.\n\n",b);
            }
            else{
                printf("Case #%d: It is a B2-Sequence.\n\n",b);
            }
            b++;
    }


    return 0;
}
