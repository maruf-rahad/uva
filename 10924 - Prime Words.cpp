#include<bits/stdc++.h>
using namespace std;
int n=2000;
int ara[2000];
void sieve(){
    int i,j;
    ara[1]=0;
    for(i=4;i<=n;i+=2){
        ara[i]=1;
    }
    int s=sqrt(n);
    for(i=3;i<=s;i+=2){
        if(ara[i]==0){
            for(j=i*i;j<=n;j+=i){
                ara[j]=1;
            }
        }
    }

}
int main()
{
    sieve();
    char ch[100];
    int i,j,a,b,sum;
    while(gets(ch)){
            sum=0;
        int length=strlen(ch);
        for(i=0;i<length;i++){
            if(ch[i]>='a'&&ch[i]<='z'){
                sum=sum+ch[i]-96;
            }else{
            sum=sum+ch[i]-64+26;
            }
        }
        if(ara[sum]==0){
            printf("It is a prime word.\n");
        }else{
        printf("It is not a prime word.\n");
        }
    }

return 0;
}
