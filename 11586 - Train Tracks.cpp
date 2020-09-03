#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch,str,str2,str3;
    int a,b,c,d,m,n,i,j,k,flag,sum,sub;
    int ara[50000];
    scanf("%d%c",&n,&str3);
    for(i=1;i<=n;i++){
            j=1;
            sum=0;
            sub=0;
            flag=0;
            while(1){
        scanf(" %c%c%c",&ch,&str,&str2);
        if(ch=='M'){
            ara[j]=1;
            j++;
            sum=sum+1;
        }else{
        ara[j]=-1;
        j++;
        sub=sub+1;
        }if(str=='M'){
        ara[j]=1;
        j++;
        sum=sum+1;
        }else{
        ara[j]=-1;
        j++;
        sub=sub+1;
        }
        if(str2=='\n')break;
            }
            if(sum!=sub){
                flag=1;
            }
            j=j-1;
            if(j<=2)flag=1;

            if(flag==0){
                printf("LOOP\n");
            }else{
            printf("NO LOOP\n");
            }
    }

return 0;
}
