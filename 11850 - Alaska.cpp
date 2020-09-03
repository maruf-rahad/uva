#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,a,b,flag;
    while(scanf("%d",&n)==1){
            if(n==0)break;
            flag=0;
        int ara[n];
        for(i=0;i<n;i++){
            scanf("%d",&ara[i]);
        }
        sort(ara,ara+i);
        if(ara[0]!=0){
                flag=1;
        }
        for(i=0;i<n-1;i++){
            if((ara[i+1]-ara[i])>200){
                flag=1;
                  break;
            }
        }
        if(1422-ara[n-1]>200)flag=1;
    if(flag==1){
        printf("IMPOSSIBLE\n");
    }else{
    printf("POSSIBLE\n");
    }
    }



return 0;
}
