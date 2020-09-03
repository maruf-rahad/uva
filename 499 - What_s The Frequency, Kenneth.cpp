#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[10000];
    int a,b,x,y,i,j,length,z;
    int ara[55];
    while(gets(str)){
            for(i=0;i<55;i++){
                ara[i]=0;
            }
            y=0;
        length=strlen(str);
        for(i=0;i<length;i++){
            if(str[i]>='A'&&str[i]<='Z'){
                x=str[i]-64+26;
                ara[x]++;
                a=ara[x];
                if(a>y){
                    y=a;
                }
            }else if(str[i]>='a'&&str[i]<='z'){
            x=str[i]-96;
            ara[x]++;
            a=ara[x];
            if(a>y){
                y=a;
            }
            }
        }
        for(i=27;i<=52;i++){
            if(ara[i]==y){
                    z=i+64-26;
                printf("%c",z);
            }
        }
        for(i=1;i<=26;i++){
                if(ara[i]==y){
            z=i+96;
            printf("%c",z);
        }
        }
        printf(" %d\n",y);

    }
    return 0;
}
