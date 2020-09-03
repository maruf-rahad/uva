#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a,b,x,y,j,temp,s;
    while(scanf("%d",&n)==1){
        int ara[n];
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
    s=100000000;
    scanf("%d",&a);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(ara[i]+ara[j]==a){
                b=abs(ara[i]-ara[j]);
                if(b<s){
                    s=b;
                    x=ara[i];
                    y=ara[j];
                }
            }
        }
    }
    if(x>y){
        temp=x;
        x=y;
        y=temp;
    }
    printf("Peter should buy books whose prices are %d and %d.\n\n",x,y);

    }
return 0;
}
