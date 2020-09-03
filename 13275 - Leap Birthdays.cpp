#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j,x,y,n,m,d,z,flag,sum;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d %d %d",&d,&m,&y,&z);
        sum=0;
        if(d!=29){
                sum=z-y;
        }else if(d==29){
            y=y+4;
        while(y<=z){
            if(y%400==0){
            sum=sum+1;

            }else if(y%100==0){
            }else if(y%4==0){
            sum=sum+1;
            }
            y=y+4;
        }
        }
        printf("Case %d: %d\n",i,sum);
    }


return 0;
}
