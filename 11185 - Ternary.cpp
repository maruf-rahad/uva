#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,x,y,i,j,n;
    int ara[100000];
    while(scanf("%d",&n)==1){
        if(n<0)break;
        j=0;
        if(n==0){
            printf("0\n");
            continue;
        }
        while(n!=0){
                ara[j]=n%3;

           n=n/3;
           j++;
        }
        for(i=j-1;i>=0;i--){
            printf("%d",ara[i]);
        }
        printf("\n");

    }


return 0;
}
