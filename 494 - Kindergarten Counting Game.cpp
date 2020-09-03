#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i,j,flag,length,sum,flag2;
    char ch[1000000];
    while(gets(ch)){
        length=strlen(ch);
        flag=0;
        sum=0;
        for(i=0;i<=length;i++){
                flag2=0;
            if((flag==0&&(ch[i]>='A'&&ch[i]<='Z'))||(flag==0&&(ch[i]>='a'&&ch[i]<='z'))){
                flag=1;
            }
            if(ch[i]>='A'&&ch[i]<='Z'||ch[i]>='a'&&ch[i]<='z'){
                flag2=1;
            }
            else if(flag==1&&flag2!=1){
                sum=sum+1;
                flag=0;
            }
        }
        printf("%d\n",sum);
    }
    return 0;

}
