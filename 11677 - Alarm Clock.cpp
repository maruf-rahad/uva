#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i,j,x,y;
    while(scanf("%d %d %d %d",&a,&b,&c,&d)==4){
        if(a==0&&b==0&&c==0&&d==0)break;
        x = a*60+b;
        y = c*60+d;
        int z=y-x;
        if(z<0){
            z=z+1440;
        }
        printf("%d\n",z);
    }


return 0;
}
