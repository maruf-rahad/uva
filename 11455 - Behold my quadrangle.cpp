#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a,b,ara[4],j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=0;j<4;j++){
            scanf("%d",&ara[j]);
        }
        if(ara[0]==0||ara[1]==0||ara[2]==0||ara[3]==0){
        printf("banana\n");
        }
        else if(ara[0]==ara[1]&&ara[1]==ara[2]&&ara[2]==ara[3]){
            printf("square\n");
        }else{
        sort(ara,ara+4);
        if(ara[0]==ara[1]&&ara[2]==ara[3]){

            printf("rectangle\n");
        }
        else if(ara[0]+ara[1]+ara[2]>ara[3]){
            printf("quadrangle\n");
        }else {
        printf("banana\n");
        }

        }
    }
    return 0;
}
