#include<bits/stdc++.h>
using namespace std;
int ara[4000];
void deg(){
int a,b,c,d,i,j;
b=0;
for(i=0;i<=60;i++){
    for(j=0;j<=60;j++){
        a=(abs(i-j))*6;
        ara[a]=1;
    }
}

}

int main()
{
    deg();
    int a,b,c,d,i,j,n;
    while(scanf("%d",&n)==1){
        if(ara[n]==1){
            printf("Y\n");
        }else{
        printf("N\n");
        }
    }
return 0;
}
