#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("input.txt","w",stdout);
    priority_queue<long long >pq;
    long long n,a,b,sum,total,i;

    while(scanf("%lld",&n)==1&&n!=0)
    {
        while(!pq.empty())
        {
            pq.pop();
        }
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&a);
            pq.push(-a);
        }
        total = 0;
        sum = 0;
        for(i=1;i<n;i++)
        {
            a =  -pq.top();
            pq.pop();

            b = -pq.top();
            pq.pop();
            sum = a+b;
            total+=sum;
          //  printf("%lld %lld %lld\n",a,b,sum);
            pq.push(-sum);
        }
        printf("%lld\n",total);
    }
    return 0;
}
