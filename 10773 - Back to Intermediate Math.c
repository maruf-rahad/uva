#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    double a,b,c,t1,t2,x,e;
    cin>>n;
    for(i=1;i<=n;i++){
    cin>>a>>b>>c;
        if(b==0||c==0||b>=c){
        printf("Case %d: can't determine\n",i);
        continue;
    }
    t1=a/c;
    e=sqrt(c*c-b*b);
    t2=a/e;
    x=t2-t1;
    printf("Case %d: %0.3lf\n",i,fabs(x));
    }
    return 0;
}
