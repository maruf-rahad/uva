#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c,d,flag,x,y,z,i,j,sum,k;
    while(scanf("%d",&a)==1&&a!=0){
        scanf("%d",&b);

            int ara[a];
            int ara3[b];
        for(i=0;i<a;i++){
            scanf("%d",&ara[i]);
        }
        x=0;
        for(i=1;i<=b;i++){
            scanf("%d %d",&c,&d);
            int ara2[c];
            sum=0;
            for(j=0;j<c;j++){
                scanf("%d",&ara2[j]);
            }
            for(j=0;j<a;j++){
                for(k=0;k<c;k++){
                    if(ara[j]==ara2[k]){
                        sum=sum+1;
                    }
                }
            }
            if(sum>=d){
                    ara3[x]=1;
                    x++;
            }else{
            ara3[x]=0;
            x++;
            }
        }
        flag=0;
        for(i=0;i<x;i++){
            if(ara3[i]==0){
            flag=1;
            break;
        }
        }
        if(flag==1){
            printf("no\n");
        }else{
        printf("yes\n");
        }
    }
return 0;
}
