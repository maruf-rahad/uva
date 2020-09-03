#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i,j,n,flag,length,sum,flag2;
    char ch[1200],str;
    int ara[30];
    while(gets(ch)){
            if(strcmp(ch,"*")==0){
                break;
            }
        sum=0;
        flag=0;
        length=strlen(ch);
        for(i=0;i<=28;i++){
            ara[i]=0;
        }
        for(i=0;i<=length;i++){
            if((flag==0&&(ch[i]>='A'&&ch[i]<='Z'))||(flag==0&&(ch[i]>='a'||ch[i]<='z'))){
                    if(ch[i]>='A'&&ch[i]<='Z'){
                        a=ch[i]-'A'+1;
                        ara[a]++;
                    }else{
                        a=ch[i]-'a'+1;
                        ara[a]++;
                    }
               flag=1;
               }else if(flag==1&&ch[i]==' '||flag==1&&ch[i]=='\0'){
               sum=sum+1;
               flag=0;
               }
        }
        flag2=0;
        for(i=1;i<=26;i++){
            if(ara[i]==sum){
                flag2=1;
            }
        }
        if(flag2==1){
            printf("Y\n");
        }else{
        printf("N\n");
        }

    }



return 0;
}
