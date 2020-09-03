#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,i,j,k,length,flag,x,y,p,z,n,flag2,flag3;
    char ch[2000020],str;
    while(scanf("%lld",&n)==1){
            if(n==0)break;
        scanf("%c",&str);
        flag=0;
        flag2=0;
        flag3=0;
        z=2000020;
    gets(ch);
    length=strlen(ch);
    for(i=0;i<length;i++){
        if(ch[i]=='Z'){
            flag=1;
            break;
        }else if(ch[i]=='D'){
        a=i;
        flag2=1;
        }else if(ch[i]=='R'){
        flag3=1;
        b=i;
        }

        if(flag2==1&&flag3==1){
            x=abs(a-b);
            if(x<z){
                z=x;
            }
        }
    }
    if(flag==1){
        printf("0\n");
    }else{
    printf("%lld\n",z);
    }

    }
    return 0;
}
