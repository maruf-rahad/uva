#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[100000];
    long long a,b,c,d,x,y,z,length,i,s,p,sum,flag,j=0,flag2;
    while(gets(ch)){
        j++;
    if(j>1){
        printf("\n");
    }
            length=strlen(ch);
            s=0;
            sum=0;
            for(i=0;i<length;i++){
                p=ch[i]-'0';
                sum=sum+p;
                if(i%2==0){
                    s=s+p;
                }else{
                s=s-p;
                }
            }
    a=ch[length-1]-'0';
    b=ch[length-2]-'0';
    c=ch[length-3]-'0';
    d=ch[length-4]-'0';
    x=b*10+a;
    y=d*10+c;
    flag=0;
    flag2=0;
    if(a==0&&b==0&&y%4==0){
        printf("This is leap year.\n");
        flag=1;
        flag2=1;
    }else if((a!=0&&x%4==0)||b!=0&&x%4==0){
    printf("This is leap year.\n");
    flag=1;
    flag2=1;
    }

    if((a==0||a==5)&&sum%3==0){
        printf("This is huluculu festival year.\n");
        flag=1;
    }
    if((a==0||a==5)&&(s%11==0)){
            if(flag2==1){
                printf("This is bulukulu festival year.\n");
                 flag=1;
            }
    }
    if(flag==0){
        printf("This is an ordinary year.\n");
    }
    }

return 0;
}
