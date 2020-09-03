#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d,x,y,z,flag,sum;
    int i;
    while(scanf("%lf %lf %lf %lf",&a,&b,&c,&d)==4&&a>0){
            i=0;
            sum=0;
            flag=0;
            x=(b*d)/100;
            while(1){
                i=i+1;
                if(b<0)b=0;
                sum=sum+b;
                b=b-x;
                if(sum>a){
                        flag=1;
                    break;
                }
                sum=sum-c;
                if(sum<0){
                    break;
                }
            }
            if(flag==1){
                printf("success on day %d\n",i);
            }else{
            printf("failure on day %d\n",i);
            }
    }

return 0;
}
