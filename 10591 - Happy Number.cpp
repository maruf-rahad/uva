#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,n,i,j,k,sum;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&a);
        j=1;
        c=a;
        int flag=0;
        while(j<200){
        sum=0;
        while(a!=0){
                b=a%10;
        sum=sum+b*b;
        a=a/10;
        }
        if(sum==1){
            flag=1;
            break;
        }
        j++;
        a=sum;

    }
    if(flag==1){
        printf("Case #%lld: %lld is a Happy number.\n",i,c);
    }else{
    printf("Case #%lld: %lld is an Unhappy number.\n",i,c);
    }

    }




return 0;
}
