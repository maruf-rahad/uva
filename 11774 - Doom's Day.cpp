#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,i,j,x,y,t;

    scanf("%d",&t);
    i=0;
    while(t--)
    {
        scanf("%d %d",&n,&m);
        printf("Case %d: ",++i);
        if(n==m)
        {
            printf("%d\n",2);
        }
        else{
            printf("%d\n",(n/(__gcd(n,m)))+(m/(__gcd(n,m))));
        }
    }











return 0;
}
