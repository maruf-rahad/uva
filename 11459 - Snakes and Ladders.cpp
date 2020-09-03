#include<bits/stdc++.h>
using namespace std;
struct game{
    int x;
    int y;
};
int main()
{
    //freopen("output.txt","w",stdout);
    int n,m,s,a,b,i,j,x,k,flag,z;
    scanf("%d",&n);
    for(k=1;k<=n;k++){
        scanf("%d %d %d",&a,&s,&m);
        struct game ara[s+1];
        flag=0;
        int ara2[a+1];
        for(i=0;i<=a;i++){
            ara2[i]=1;
        }
        for(i=1;i<=s;i++){
                scanf("%d %d",&ara[i].x,&ara[i].y);
        }
        for(i=1;i<=m;i++){
                scanf("%d",&x);
                if(flag==0){
                z=i%a;
                if(z==0){
                    z=a;
                }
                ara2[z]=ara2[z]+x;
                int flag2=0;
                for(j=1;j<=s;j++){
                    if(ara2[z]==ara[j].x){
                        ara2[z]=ara[j].y;
                        flag2=1;
                        break;
                    }
                }
                if(ara2[z]>=100){
                        ara2[z]=100;
                    flag=1;
                }

                }
        }
        for(i=1;i<=a;i++){
            printf("Position of player %d is %d.\n",i,ara2[i]);
        }

    }

return 0;
}
