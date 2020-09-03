#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long p,b,h,w,a,c,z,i,flag,flag2,j,s;
    while(scanf("%lld %lld %lld %lld",&p,&b,&h,&w)==4){
            flag2=0;
        for(i=1;i<=h;i++){
                scanf("%lld",&a);
                flag=0;
        for(j=1;j<=w;j++){
            scanf("%lld",&c);
            if(c>=p){
                flag=1;
            }

        }
        if(flag==1){
                s=p*a;
                if(s<=b){
                    b=s;
                    flag2=1;
                }
        }

        }
        if(flag2==1){
            printf("%lld\n",b);
        }else{
        printf("stay home\n");
        }
    }
return 0;
}
