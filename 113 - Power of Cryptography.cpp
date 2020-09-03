#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,m,a,b,i,j;


    while(scanf("%lf",&n)==1)
    {
        int sum = 1;
        scanf("%lf",&m);

        a = n;
        while(m!=n)
        {
            n = n*a;
            sum++;
        }
        printf("%d\n",sum);
    }








return 0;
}
