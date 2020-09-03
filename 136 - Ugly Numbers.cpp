#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b,c,d,i,j,k,total,sum;
    long long ara[3] = {2,3,5};
    priority_queue<long long>pq;
     map<long long,long long>mp;

     mp.clear();
     while(!pq.empty())
     {
         pq.pop();
     }
    // cin>>n;

    pq.push(-1);
    mp[1] = 1;
    j = 0;
    sum = 0;
        int flag = 0;
    while(j<1500)
    {
        a = -pq.top();
       // printf("%lld = %lld\n",j,a);
      //  printf("a = %lld\n",a);
        for(i=0;i<3;i++)
        {
            b = a*ara[i];

            if(mp.find(b)==mp.end())
            {
                mp[b] = 1;
                pq.push(-b);
                sum++;

            }
        }
        j++;
        pq.pop();

    }
    printf("The 1500'th ugly number is %lld.\n",a);



    return 0;
}
