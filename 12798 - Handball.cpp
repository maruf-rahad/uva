#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x,y,i,j,n,m,k;
    while(scanf("%d %d",&n,&m)==2){
            int ara[m];
            x=0;
    for(i=1;i<=n;i++){
            y=0;
        for(j=0;j<m;j++){
            scanf("%d",&ara[j]);
        }
        for(k=0;k<m;k++){
            if(ara[k]>0){
                y=y+1;
            }
        }
        if(y==m){
            x=x+1;
        }

    }
    printf("%d\n",x);

    }

return 0;
}
