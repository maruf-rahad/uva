#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[100000];
    char str[100000],str2,str3;
    int i,j,a,b,c,d,length,flag;
    while(gets(ch)){
            if(strcmp("DONE",ch)==0){
                break;
            }
            j=0;

        length=strlen(ch);
        for(i=0;i<length;i++){
            if(ch[i]>='A'&&ch[i]<='Z'){
                str2=ch[i]+32;
                str[j]=str2;
                  j++;
        }
        else if(ch[i]>='a'&&ch[i]<='z'){
            str[j]=ch[i];
            j++;
        }
        }
        a=0;
        b=j-1;
        flag=0;
        for(i=0;i<j;i++){
            if(str[a]!=str[b]){
                flag=1;
                break;
            }
            a++;
            b--;
        }
        if(flag==0){
            printf("You won't be eaten!\n");
        }else{
        printf("Uh oh..\n");
        }

    }

return 0;
}
