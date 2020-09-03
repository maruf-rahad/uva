#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,i,j,d,x,y,z,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        a=a*5;
        x=(55*a)/100;
        y=(45*a)/100;
        z=(60*a)/100;
        z=z/2;
        printf("Case %d:\n",i);
        printf("-%d %d\n",y,z);
        printf("%d %d\n",x,z);
        printf("%d -%d\n",x,z);
        printf("-%d -%d\n",y,z);
    }

return 0;
}
