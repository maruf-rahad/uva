#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[100000];
    char str[100000];
    int length1,length2,a,sum,i,j,flag;
    while(scanf("%s",ch)==1){
         length1=strlen(ch);
         scanf("%s",str);
         length2=strlen(str);
         a=0;
         sum=0;
         for(i=0;i<length1;i++){
            for(j=a;j<length2;j++){
                if(ch[i]==str[j]){
                    sum=sum+1;
                    a=j+1;
                    break;
                }
            }

         }
         if(sum==length1){
            printf("Yes\n");
         }else{
         printf("No\n");
         }
    }
return 0;
}
