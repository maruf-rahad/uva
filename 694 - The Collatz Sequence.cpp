#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,i,j,s,z,y,sum;
    i=1;
    while(scanf("%lld %lld",&a,&b)==2){
        if(a<0&&b<0)break;
        s=a;
        sum=1;
        while(s!=1){

                if(s%2==0){
                    s=s/2;
                }else{
                s=3*s+1;
                }
                if(s>b){
                    break;
                }
                           sum=sum+1;

                }

        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",i,a,b,sum);
        i=i+1;
    }


return 0;
}
