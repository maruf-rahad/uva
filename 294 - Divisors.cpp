#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,n,c,d,i,j,sum,s,x,y,k;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
            x=0;
        scanf("%lld %lld",&a,&b);
        for(j=a;j<=b;j++){
                sum=0;
            s=sqrt(j);
            for(k=1;k<=s;k++){
                if(j%k==0){
                    if(k*k==j){
                        sum=sum+1;
                    }else{
                    sum=sum+2;
                    }
                }
            }

            if(sum>x){
                x=sum;
                y=j;
            }
        }
    printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",a,b,y,x);
    }


return 0;
}
