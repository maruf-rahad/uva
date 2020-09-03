#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,n,m,sum,sub,flag,i;
    int ara[3];
    char ch[3]={'A','B','C'};
    while(scanf("%d %d %d",&a,&b,&c)==3){
            ara[0]=a;
            ara[1]=b;
            ara[2]=c;
            sum=0;
            sub=0;
            if(a==b&&b==c){
                printf("*\n");
            }else{
            for(i=0;i<3;i++){
                if(ara[i]==1){
                    sum=sum+1;
                    a=i;
                }else{
                sub=sub+1;
                b=i;
                }
            }
            if(sum>sub){
                    printf("%c\n",ch[b]);
            }else if(sub>sum){
            printf("%c\n",ch[a]);
            }
            }

    }



return 0;
}
