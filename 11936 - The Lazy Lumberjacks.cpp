#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j,x,y,n,flag;
    int ara[3];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d %d",&ara[0],&ara[1],&ara[2]);
        sort(ara,ara+3);
        flag=0;
        for(j=0;j<3;j++){
            if(ara[j]==0){
                flag=1;
            }
        }
        if((ara[0]+ara[1])>ara[2]){
            printf("OK\n");
        }else{
            flag=1;
        }
        if(flag==1){
            printf("Wrong!!\n");
        }
    }

return 0;
}
