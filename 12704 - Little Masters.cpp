#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d,big,little;
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%lf %lf %lf",&a,&b,&c);
        d=sqrt(a*a+b*b);
        little=c-d;
        big=c+d;
        printf("%0.2lf %0.2lf\n",little,big);
    }



return 0;
}
