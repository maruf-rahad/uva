#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a,b,c,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d %d",&a,&b,&c);
        x=b+c;
        while(x>a){
            x=x-a;
        }
        printf("Case %d: %d\n",i,x);
    }
    return 0;
}
