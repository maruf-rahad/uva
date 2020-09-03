#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    int ara[100000];
    int n,a,b,i,j,k,x;
    scanf("%d",&n);
    scanf("%c",&ch);
        for(i=1;i<=n;i++){
        k=0;
        scanf("%c",&ch);
        while(1){
            scanf("%d%c",&ara[k],&ch);
            if(ch=='\n')break;
            k++;
        }
        char ara2[k+1][100];
       for(j=0;j<=k;j++){
            scanf("%s",&ara2[j]);
        }
        for(j=0;j<=k;j++){
                for(x=0;x<=k;x++){
            if(ara[x]==j+1){
                a=x;
                printf("%s\n",ara2[a]);
                break;
            }
                }
        }
        if(i<n){
        printf("\n");
    }
        }

return 0;
}
