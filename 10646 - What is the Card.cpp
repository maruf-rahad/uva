#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,i,j,c,d,x,y;
    char ch[52];
    char ch2[52];
    char str;
    scanf("%d%c",&n,&str);
    for(i=1;i<=n;i++)
    {
        y=0;
        for(j=0;j<52;j++){
            scanf("%c%c%c",&ch[j],&ch2[j],&str);
        }
        for(j=0;j<52;j++){
            printf("%c%c ",ch[j],ch2[j]);
        }
        j=3;
        int sum=0,z=0;
        while(j>0){
        x=ch[z]-48;
        if(a>=2&&a<=9){
            x=x;
        }else{
        x=10;
        }
        y+=x;
        sum=sum+10-x+1;
        z=sum+1;
        j--;
        }
        printf("%d %d\n",sum,x);


    }

return 0;
}
