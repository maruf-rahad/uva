#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j,x,y,sum;
    while(scanf("%d %d",&a,&b)==2)
    {
        if(a==0&&b==0)break;
        sum=0;
        for(i=a;i<=b;i++)
        {
            x=sqrt(i);
            y=x*x;
            if(y==i){
               sum=sum+1;
            }
        }
        printf("%d\n",sum);
    }



return 0;
}
