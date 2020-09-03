#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i,j,x,y,n;
    char str;
    scanf("%d%c",&n,&str);
    for(i=1;i<=n;i++)
    {
        scanf("%c",&str);
        scanf("%d",&a);
        int ara[a];
        int ara2[a];
        for(j=0;j<a;j++){
            scanf("%d %d",&b,&c);
            x=b+c;
            ara[j]=x;
        }
        int carry=0;
        for(j=a-1;j>=0;j--){
                ara[j]=ara[j]+carry;
            if(ara[j]>9){
                ara2[j]=ara[j]%10;
                carry=ara[j]/10;
            }else{

                ara2[j]=ara[j];
               carry=0;
            }
        }
        if(i>1){
            printf("\n");
        }
        for(j=0;j<a;j++){
            printf("%d",ara2[j]);
        }
        printf("\n");
    }


return 0;
}
