#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,x,sum;
    while(scanf("%d",&n)==1 && n)
    {
        sum = 0;
        while(n!=0)
        {
            n=n/2;
            sum++;
        }
        printf("%d\n",sum);
    }

return 0;
}
