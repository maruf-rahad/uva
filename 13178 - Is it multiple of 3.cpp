#include<bits/stdc++.h>
using namespace std;
int main()
{


    long long a,b,i,j,n;
    scanf("%lld",&n);
    while(n--)
    {
        scanf("%lld",&a);
        b = ((a*(a+1))/2);
        if(b%3==0)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }









return 0;
}
