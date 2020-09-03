#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,x,s;
    while(scanf("%d",&n)==1){
        if(n==0)break;
        x=0;

        s=n+1;
        while(s>2){
            a=s/3;
            b=a*3;
            s=s-b+a;
            x=x+a;
        }
        printf("%d\n",x);
    }
    return 0;

}
