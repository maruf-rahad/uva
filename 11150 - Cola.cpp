#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,s,c,x;
     while(scanf("%d",&a)==1){
     s=a+1;
     x=0;
     while(s>2){
            b=s/3;
     c=b*3;
     s=s+b-c;
     x=x+b;

     }
     printf("%d\n",x+a);
     }
     return 0;



}
