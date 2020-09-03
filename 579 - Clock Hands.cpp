#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str;
    double a,b,c,d,i,j,x,y;
    while(scanf("%lf%c%lf",&a,&str,&b)==3){
        if(a==0&&b==0)break;
        c=(5*b)/60+a*5;
        d=abs(b-c);
        if(d>=60){
            d=d-60;
        }
        d=d*6;
        if(d>180){
            d=360-d;
        }
        printf("%0.3lf\n",d);
    }


return 0;
}
