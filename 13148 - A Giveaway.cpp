#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,j;
    while(scanf("%d",&n)==1)
    {
        if(n==0)break;
        int flag=0,flag2=0;
        a=sqrt(n);
        for(i=1;i<=a;i++){
            if(i*i==n)flag=1;
            if(i*i*i==n)flag2=1;
        }
        if(flag==1&&flag2==1){
            printf("Special\n");
        }else{
        printf("Ordinary\n");
        }
    }

return 0;
}
