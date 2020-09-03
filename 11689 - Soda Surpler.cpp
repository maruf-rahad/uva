#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a,b,c,s,sum,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d %d",&a,&b,&c);
        s=a+b;
        sum=0;
        while(s>=c){
            x=s/c;
            s=s-x*c+x;
            sum=sum+x;

        }
        printf("%d\n",sum);
    }
    return 0;
}
