#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long ara[100000];
    long long a,b,c,d,i,j,x,y,z,n;
    i=0;
    x=0;
    while(scanf("%lld",&n)==1){
        ara[i]=n;
        x=x+1;
        sort(ara,ara+x);

        if(x%2==1){
                a=x/2+1-1;
            printf("%lld\n",ara[a]);
        }else{
        b=(x/2)-1;
        c=x/2;
        d=(ara[b]+ara[c])/2;
        printf("%lld\n",d);

        }
        i++;
    }

return 0;
}
