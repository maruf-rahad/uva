#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,n,i,j,k,temp,x,z;
    int ara[3];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d %d %d",&a,&b,&c,&d);
        for(j=0;j<3;j++){
            scanf("%d",&ara[j]);
        }
        for(j=0;j<3;j++){
            for(k=0;k<2;k++){
                if(ara[k]<ara[k+1]){
                    temp=ara[k];
                    ara[k]=ara[k+1];
                    ara[k+1]=temp;
                }
            }
        }
        x=(ara[0]+ara[1])/2;
        z=a+b+c+d+x;
        printf("Case %d: ",i);
        if(z>=90)printf("A\n");
        else if(z>=80)printf("B\n");
        else if(z>=70)printf("C\n");
        else if(z>=60)printf("D\n");
        else printf("F\n");

    }

return 0;
}
