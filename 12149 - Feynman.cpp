#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s;
    while(scanf("%d",&n)==1&&n>0){
        s=((n*(n+1))*(2*n+1))/6;
        printf("%d\n",s);
    }
    return 0;

}
