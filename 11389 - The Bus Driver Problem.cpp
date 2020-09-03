#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i,j,sum;
    while(scanf("%d %d %d",&a,&b,&c)==3)
    {
        if(a==0&&b==0&&c==0)break;
        int ara[a];
        int ara2[a];
        for(i=0;i<a;i++){
            scanf("%d",&ara[i]);
        }
        for(i=0;i<a;i++){
            scanf("%d",&ara2[i]);
        }
        sort(ara,ara+a);
        sort(ara2,ara2+a);
        a=a-1;
        int total=0;
        for(i=0;i<=a;i++){
            sum=ara[i]+ara2[a-i];
            if(sum>b){
                total=total+(sum-b);
            }
        }
        printf("%d\n",total*c);
    }



return 0;
}
