#include<bits/stdc++.h>
using namespace std;
int main()
{
        freopen("input.txt","w",stdout);
    long long b,sum,n,a;
    while(scanf("%lld",&n)==1&&n!=0)
    {
        a=1;
        while(a<n)
        {
            a=a*2;
        }
        if(a==1)
        {
            printf("Bob\n");
        }
        else if(a==n)
        {
            printf("Bob\n");
        }
        else{
            printf("Alice\n");
        }
    }
return 0;
}
