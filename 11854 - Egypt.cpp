#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,x,y,n,c;
    long long ara[3];
    while(scanf("%lld %lld %lld",&a,&b,&c)==3){
            if(a==0&&b==0&&c==0)break;
            ara[0]=a;
            ara[1]=b;
            ara[2]=c;
            sort(ara,ara+3);
        x=ara[0]*ara[0]+ara[1]*ara[1];
        y=ara[2]*ara[2];
        if(x==y){
            printf("right\n");
        }else{
        printf("wrong\n");
        }
    }
return 0;
}
