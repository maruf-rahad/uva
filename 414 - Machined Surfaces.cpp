#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i,j,n;
    char str;
    while(scanf("%d",&n)== 1&&n>0)
    {
        scanf("%c",&str);
        char ch[n][25];
    for(i=0;i<n;i++)
    {
        for(j=0;j<25;j++)
        {
            scanf("%c",&ch[i][j]);
        }
        scanf("%c",&str);
    }
    int ara[n];
    for(i=0;i<n;i++){
          int  sum=0;
        for(j=0;j<25;j++){
            if(ch[i][j]=='X'){
                sum=sum+1;
            }
        }
        ara[i]=sum;
    }
    int ma=ara[0];
    for(i=0;i<n;i++){
        if(ara[i]>ma){
            ma=ara[i];
        }
    }
    int s=0;
    for(i=0;i<n;i++){
        s=s+(ma-ara[i]);
    }
    printf("%d\n",s);
    }



return 0;
}
