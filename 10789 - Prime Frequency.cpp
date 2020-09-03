#include<bits/stdc++.h>
using namespace std;
int ara[2500];
void sieve(){
    int i,j,n,x;
    n=2500;
    ara[0]=1;
    ara[1]=1;
    ara[2]=0;
    x=sqrt(n);
    for(i=4;i<=n;i=i+2){
            ara[i]=1;
    }
    for(i=3;i<=x;i=i+2){
        if(ara[i]==0){
            for(j=i*i;j<=n;j=j+i){
                ara[j]=1;
            }
        }
    }
}

int main()
{
    sieve();
    int a,b,i,j,x,y,c,d,n,length,flag;

    char ch[2200],str;
    scanf("%d%c",&n,&str);
    for(i=1;i<=n;i++){
        scanf("%s",&ch);
        int ara2[151];
    for(j=0;j<=150;j++){
            ara2[j]=0;
    }
    length=strlen(ch);
    for(j=0;j<length;j++){
            x=ch[j];
            ara2[x]++;

    }
    flag=0;
    printf("Case %d: ",i);
    for(j=1;j<=150;j++){
        y=ara2[j];
        if(ara[y]==0){
        printf("%c",j);
        flag=1;
        }
    }
    if(flag==0){
        printf("empty");
    }
    printf("\n");


    }



return 0;
}
