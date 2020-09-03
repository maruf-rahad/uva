#include<bits/stdc++.h>
using namespace std;
vector<long long>v2;
vector<int>v3;
int n = 31;
int ara[32];
int ara2[32];
void sieve()
{
    ara[0] = 1;
    ara[1] = 1;
    int i,j,s ;
    s = sqrt(n+1);
    for(i=4;i<=n;i+=2)
    {
        ara[i] = 1;
    }
    for(i=3;i<=s;i+=2){
        if(ara[i] == 0)
        {
            for(j=i*i;j<=n;j+=i)
            {
                ara[j] = 1;
            }
        }
    }
}
void power()
{
    int i,j,a;
    for(i=0;i<=n;i++){
        a = pow(2,i)-1;
        v2.push_back(a);
    }
}
void perfect()
{
    long long i,a,j,flag,s;
    for(i=0;i<v2.size();i++){
        a = v2[i];
        flag = 0;
        if(a%2==0){
            flag=1;
        }
        else{
                s = sqrt(a);
            for(j=3;j<=s;j+=2)
            {
                if(a%j==0){
                    flag = 1;
                    break;
                }
            }
        }
        v3.push_back(flag);
    }
}


int main()
{

    int i,x;
    long long y;
    sieve();
    power();
    perfect();
    while(scanf("%d",&x)==1&&x!=0)
    {
         if(ara[x]==0&&v3[x]==0)
         {
             y =(pow(2,(x-1))*(pow(2,x)-1));
             printf("Perfect: %lld!\n",y);
         }
         else if(ara[x]==1&&v3[x]==1)
         {
             printf("Given number is NOT prime! NO perfect number is available.\n");
         }
         else if(ara[x]==0&&v3[x]==1)
         {
             printf("Given number is prime. But, NO perfect number is available.\n");
         }

    }

return 0;
}
