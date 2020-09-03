#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,x,y,i,j,sum,n,m,flag;
    while(scanf("%d %d",&n,&m)==2){
            if(n==0&&m==0)break;
            flag=0;
        int ara[n];
        for(i=0;i<n;i++){
            scanf("%d",&ara[i]);
        }
        for(i=0;i<m;i++){
            scanf("%d %d %d",&a,&b,&c);
            ara[a-1]=ara[a-1]-c;
            ara[b-1]=ara[b-1]+c;
        }
        for(i=0;i<n;i++){
            if(ara[i]<0){
                flag=1;
            }
        }
    if(flag==1){
        printf("N\n");
    }else{
    printf("S\n");
    }
    }

return 0;
}
