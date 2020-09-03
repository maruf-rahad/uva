#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    int c;
    while(1){
        c=a%b;
        if(c==0)break;
            else{
                a=b;
                b=c;
            }
    }
    return b;
}
int main()
{
    int a,b,c,d,i,j,k,x,y,z,n,sum;

    while(scanf("%d",&n)==1)
    {
    {
        if(n==0)break;
    }
    sum=0;
    for(i=1;i<n;i++){
        for(j=i+1;j<=n;j++){
                a=i;
                b=j;
                if(b>a){
                    swap(a,b);
                }
            sum=sum+gcd(a,b);
        }
    }
    printf("%d\n",sum);
    }




return 0;
}
