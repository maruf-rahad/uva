#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,a,b,c,d,x,y,flag,n,length;
    char ch[2000],str;
     int ara[2000];
    scanf("%d%c",&n,&str);
    for(i=1;i<=n;i++){
        gets(ch);
        flag=0;
        x=0;
        length=strlen(ch);
        for(j=0;j<=length+10;j++){
            ara[j]=0;
        }
        for(j=0;j<length;j++){
            if(ch[j]=='('){
                x++;
                ara[x]=1;
               }else if(ch[j]=='['){
                   x++;
                   ara[x]=2;
               }else if(ch[j]==')'&&ara[1]!=0&&ara[x]==1){
               ara[x]=0;
               x--;
               }else if(ch[j]==']'&&ara[1]!=0&&ara[x]==2){
               ara[x]=0;
               x--;
               }else {
               flag=1;
               }
        }
        if(flag==0&&ara[1]==0){
            printf("Yes\n");
        }else {
        printf("No\n");
        }

    }
    return 0;
}
