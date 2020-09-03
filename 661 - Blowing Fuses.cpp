#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,x,y,i,j,n,m,p,sum,s,z,flag;
    x=1;
    y=1;
    while(scanf("%d %d %d",&n,&m,&p)==3){
        if(n==0&&m==0&&p==0)break;
        int ara[n+1];
        int ara2[n+1];
        int ara3[n+1];
        s=-9999999;
        z=0;
        flag=0;
        for(i=1;i<=n;i++){
            scanf("%d",&ara[i]);
        }
        for(i=1;i<=n;i++){
            ara2[i]=0;
            ara3[i]=0;
        }
        for(i=1;i<=m;i++){
                scanf("%d",&a);
                if(ara3[a]==0){
                    ara2[a]=ara2[a]+ara[a];
                    ara3[a]=1;
                    z=z+ara[a];
                    if(z>s){
                        s=z;
                    }
                    if(s>p){
                        flag=1;
                    }
                }else{
                ara2[a]=ara2[a]-ara[a];
                ara3[a]=0;
                        z=z-ara[a];
                    if(z>s){
                        s=z;
                        if(s>p){
                            flag=1;
                        }
                }
        }
        }
        sum=0;
        for(i=1;i<=n;i++){
            sum=sum+ara2[i];
        }

        if(sum>p||flag==1){
            printf("Sequence %d\n",x);
            printf("Fuse was blown.\n\n");
            flag=1;
        }else{
        printf("Sequence %d\n",x);
        printf("Fuse was not blown.\n");
        printf("Maximal power consumption was %d amperes.\n\n",s);
        }
        x++;
        y++;
    }


return 0;
}
