#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,x,y,sum,i,j;
    while(scanf("%d %d",&a,&b)==2){
            if(a==0&&b==0)break;
                 d=abs(a-b);
                 if(d%2==1){
                     c=d/2;
                     x=d*c;
                     printf("%d\n",x);
                     y=(a+1+b-1)*c;
                     printf("%d\n",y);

                 }

    }

return 0;
}
