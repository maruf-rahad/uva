#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","w",stdout);
    long long a,b,n,s,i,j,sum,m,flag,flag2;
    scanf("%lld",&m);
    while(m--)
    {
        scanf("%lld",&n);

        flag = 0;
        for(i=1;i<=35;i++)
        {
            flag2 = 0;
            s = n;
            sum = 0;
            while(s!=0)
            {
                a = s%10;
                b = a;

                if(a==0){
                    s=s/10;
                    continue;
                }
               else if(a==1){
                    sum = sum+a;

                       if(sum>n){
                            flag2=1;
                            break;
                        }
                        else if(sum == n)
                        {

                            s=s/10;
                            if(s==0){

                                flag=1;

                                break;
                            }
                            else{
                                break;
                            }
                        }
                        s=s/10;
                }
                else{
                    for(j=1;j<i;j++)
                    {
                        a = a*b;
                    }

                    sum = sum+a;

                        if(sum==n){

                            s=s/10;
                            if(s==0){
                                flag=1;

                                break;
                            }
                            else{
                                break;
                            }
                        }
                        if(sum>n){
                            flag2=1;
                            break;
                        }
                        s=s/10;
                }
                if(flag2==1){
                    break;
                }
            }

            if(flag==1){
                break;
            }

            }
            if(flag == 1)
            {
                printf("Armstrong\n");
            }
            else{
                printf("Not Armstrong\n");
            }

        }

return 0;
}
