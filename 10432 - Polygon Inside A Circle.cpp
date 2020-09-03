#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
int main()
{
    double c,d,x,y,a,b,p,q,r,n,h;
    while(scanf("%lf %lf",&r,&n)==2){
        a=(360/n)/2;
        a=180-90-a;
        a=(a*pi)/180;

        h=r*sin(a);
        p=r*cos(a);
        x=(p*h)*n;

         printf("%0.3lf\n",x);

    }

return 0;
}
