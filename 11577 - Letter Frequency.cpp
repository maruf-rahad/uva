#include<bits/stdc++.h>
using namespace std;
int ara[30];
int main()
{
    int a,b,i,j,x,y,c,d,n,length;
    char ch[200000],str;
    scanf("%d%c",&n,&str);
    for(i=1;i<=n;i++){
        gets(ch);
        length=strlen(ch);
        for(j=0;j<30;j++){
            ara[j]=0;
        }
        for(j=0;j<length;j++){
            if(ch[j]>='A'&&ch[j]<='Z'){
                a=ch[j]-'A'+1;
            ara[a]++;
            }
            if(ch[j]>='a'&&ch[j]<='z'){
            a=ch[j]-'a'+1;
            ara[a]++;

            }
        }
        x=ara[0];
        for(j=1;j<=28;j++){
            if(x<ara[j]){
                x=ara[j];
            }
        }
        for(j=1;j<=26;j++){
            if(ara[j]==x){
                b='a'-1+j;
            printf("%c",b);
            }
        }
        printf("\n");
    }
    return 0;

}
