#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str1[1100];
    char str2[1200];
    char str3[1200];
    char ch;
    int a,b,x,y,i,j,length;
    while(gets(str1)){
        gets(str2);
        a=strlen(str1);
        b=strlen(str2);
        x=0;
        for(i=0;i<a;i++){
            for(j=0;j<b;j++){
            if(str1[i]==str2[j]){
            str3[x]=str1[i];
            x++;
            str2[j]='1';
             break;
            }
        }
    }
    str3[x]='\0';
    for(i=0;i<x-1;i++){
        for(j=0;j<x-1;j++){
            if(str3[j]>str3[j+1]){
                    ch=str3[j];
            str3[j]=str3[j+1];
            str3[j+1]=ch;

            }
        }
    }
    printf("%s\n",str3);
    }


    return 0;
}
