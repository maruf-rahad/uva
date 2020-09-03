#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,a,b,x,y,i,j,sum;
    int ara[500000];
    while(scanf("%lld",&n)==1){
        if(n==0)break;
        if(n%2==0){
                j=1;
            for(i=2;i<=n/2;i=i+2){
                if(i%2==0){
                    ara[j]==i;
        j++;
                }

            }
        }
        for(i=1;i<=j;i++){
                printf("%lld\n",ara[i]);

        }
    }


return 0;
}
