#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[1000000],ah,bh;
    int length,i,j,a,b,c,x,y,flag,flag2;
    while(gets(ch)){
            flag=0;
            flag2=0;
            length=strlen(ch);
    for(i=0;i<=length;i++){
            if((ch[i]>='a'&&ch[i]<='z')||(ch[i]>='A'&&ch[i]<='Z')){
                    if(flag==0){
                    if((ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='U'||ch[i]=='O')){
                        flag=1;
                         a=i;
                    }else{
                    ah=ch[i];
                    a=i+1;
                    flag=2;
                    }

               }
               }else{
                   if(flag==1){
                   b=i-1;
                   for(j=a;j<=b;j++){
                    printf("%c",ch[j]);
                   }
                   printf("ay");
                   flag=0;
                   }
                   if(flag==2){
                   b=i-1;
                   for(j=a;j<=b;j++){
                    printf("%c",ch[j]);
                   }
                   printf("%cay",ah);
                   flag=0;
                   }
                    if(i==length){
                    break;
                    }

               printf("%c",ch[i]);
               }

    }
    printf("\n");
    }


return 0;
}
