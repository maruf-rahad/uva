#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,a,b,j,x,y,temp,s,i,sum;
    while(scanf("%lld %lld",&a,&b)==2){
            if(a==0||b==0){
                    break;
            }
            if(a>b){
                temp=a;
                a=b;
                b=temp;
            }
            x=0;
            for(i=a;i<=b;i++){
                sum=0;
                s=i;
                if(s==1){
                    x=3;
                    y=1;
                }
                while(s!=1){
                    if(s%2==0){
                        s=s/2;
                    }else{
                    s=3*s+1;
                    }
                    sum=sum+1;
                }
                if(sum>x){
                    x=sum;
                    y=i;
                }

            }

            printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",a,b,y,x);

    }
return 0;
}
