#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,a,b,sum;
    char ch[1000];
    while(gets(ch))
    {
        if(strcmp(ch,"0")==0)break;
        sum=0;
        int length=strlen(ch);
        for(i=0;i<length;i++)
        {
            sum=(sum*10+(ch[i]-'0'))%17;
        }
        int flag=0;
        if(sum==0){
            flag=1;
        }
        if(flag==1){
            printf("1\n");
        }else{
        printf("0\n");
        }
    }


return 0;
}
