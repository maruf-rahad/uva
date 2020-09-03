#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,j,a,b,c,d,y,x,m;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
            y=0;
        scanf("%lld",&m);
        x=sqrt(m);
    for(j=2;j<=x;j++){
        if(m%j==0){
                if(y==0){
            a=j;
            b=m/j;
            y++;
                }
        else{
                c=j;
        d=m/j;
        y=0;
        break;
        }
    }

    }
    printf("Case #%lld: %lld = %lld * %lld = %lld * %lld\n",i,m,a,b,c,d);
}
return 0;
}
