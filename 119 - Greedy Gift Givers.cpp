#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,x,y,z,i,j,k,l,n;
    char str[15];
    z=1;

    while(scanf("%d",&n)==1){
    int ara[n];
        char ch[n][15];
        for(i=0;i<n;i++){
            ara[i]=0;
        }
        for(i=0;i<n;i++){
            scanf("%s",&ch[i]);
        }
        for(i=0;i<n;i++){
            scanf("%s %d %d",&str,&a,&b);
            if(b>0){
            x=a/b;
            y=x*b;
            for(j=0;j<n;j++){
                if(strcmp(ch[j],str)==0){
                    ara[j]=ara[j]-y;
                    break;
                }
            }

            for(j=0;j<b;j++){
                scanf("%s",&str);
                for(k=0;k<n;k++){
                    if(strcmp(str,ch[k])==0){
                        ara[k]=ara[k]+x;
                    }
                }
            }
            }


        }
        if(z>1){
            printf("\n");
        }
        for(i=0;i<n;i++){
            printf("%s %d\n",ch[i],ara[i]);
        }
        z++;
    }


return 0;
}
