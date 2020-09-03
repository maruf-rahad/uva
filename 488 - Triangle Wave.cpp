#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i,j,x,y,n,k;
    char ch;
    scanf("%d",&n);
    for(k=1;k<=n;k++){
            scanf("%c",&ch);
        scanf("%d %d",&a,&b);
    if(k>1){
        printf("\n");
    }
        for(x=1;x<=b;x++){
        for(i=1;i<=a;i++){
            for(j=1;j<=i;j++){
                printf("%d",i);
            }
            printf("\n");
        }
        for(i=a-1;i>=1;i--){
            for(j=1;j<=i;j++){
                printf("%d",i);
            }
            printf("\n");
        }
        if(x<b){
        printf("\n");
        }

    }
    }
    return 0;
}
