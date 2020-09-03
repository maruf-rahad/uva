#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,x,y,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d",&a,&b);
        if(a<b){
            printf("impossible\n");
        }else{
        x=(a+b);
        y=(a-b);
        if(x<0||y<0||x%2!=0||y%2!=0){
            printf("impossible\n");
        }else{
        x=x/2;
        y=y/2;
        printf("%d %d\n",x,y);
        }
        }
    }
return 0;
}
