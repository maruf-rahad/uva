#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,l,sum,i,s;
    while(scanf("%d %d %d %d %d",&a,&b,&c,&d,&l)==5){
            if(a==0&&b==0&&c==0&&d==0&&l==0)break;
        sum=0;
        for(i=0;i<=l;i++){
            s=a*i*i+b*i+c;
            if(s%d==0)sum=sum+1;
        }
        printf("%d\n",sum);
    }
    return 0;

}
