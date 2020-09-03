#include<bits/stdc++.h>
using namespace std;
#define  pi acos(-1.0)
int main()
{
    double a,b,c,d,i,j,x,y;
    int n;
    scanf("%d",&n);
    while(n--){
        scanf("%lf",&a);
     b=(a*6)/10;
     c=a/5;
     x=pi*c*c;
     y=(a*b)-x;
     printf("%0.2lf %0.2lf\n",x,y);

    }
return 0;
}
