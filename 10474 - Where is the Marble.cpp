#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j,x,y,n,m,flag;
    x=1;
    while(scanf("%d %d",&n,&m)==2){
            if(n==0&&m==0)break;
            int ara[n];
            for(i=0;i<n;i++){
                scanf("%d",&ara[i]);
            }
            int flag2=0;
            sort(ara,ara+n);
            for(i=1;i<=m;i++){
                scanf("%d",&a);
                if(flag2==0){
                  printf("CASE# %d:\n",x);
                  flag2=1;
                }
                for(j=0;j<n;j++){
                         flag=0;
                    if(ara[j]==a){
                        printf("%d found at %d\n",a,j+1);
                        flag=1;
                        break;
                    }
                }
                if(flag==0){
                    printf("%d not found\n",a);
                }
            }
            x++;
    }


    return 0;
}
