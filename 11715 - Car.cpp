#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    double a,b,c,d,x,y,j;
    i=1;
    while(scanf("%d",&n)==1){
            if(n==0)break;
            scanf("%lf %lf %lf",&a,&b,&c);
            if(n==1){
                x=(b-a)/c;
                y=((a+b)/2)*c;
                printf("Case %d: %0.3lf %0.3lf\n",i,y,x);
            }else if(n==2){
                x=(b-a)/c;
                y=((a+b)/2)*x;
                printf("Case %d: %0.3lf %0.3lf\n",i,y,x);
            }else if(n==3){
            x=sqrt(a*a+2*b*c);
            y=(x-a)/b;
            printf("Case %d: %0.3lf %0.3lf\n",i,x,y);
            }else if(n==4){
            x=sqrt(a*a-2*b*c);
            y=(a-x)/b;
            printf("Case %d: %0.3lf %0.3lf\n",i,x,y);
            }
        i++;
    }

return 0;
}
