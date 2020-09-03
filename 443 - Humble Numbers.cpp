#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("input.txt","w",stdout);
    long long n,a,b,c,d,i,j,k,total,sum,m;
    long long ara[4] = {2,3,5,7};
    priority_queue<long long>pq;
     map<long long,long long>mp;
     vector<long long>v;

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
    while(j<=5842)
    {
        a = -pq.top();
        v.push_back(a);
       // printf("%lld = %lld\n",j,a);
      //  printf("a = %lld\n",a);
        for(i=0;i<4;i++)
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

    while(scanf("%lld",&n)==1&&n>0)
    {
        m = n;
        a = n%10;
        n = n/10;
        b = n%10;
        if(a==1&&b!=1)
        {
            printf("The %lldst humble number is %lld.\n",m,v[m-1]);
        }
        else if(a==2&&b!=1)
        {
            printf("The %lldnd humble number is %lld.\n",m,v[m-1]);
        }
        else if(a==3&&b!=1)
        {
            printf("The %lldrd humble number is %lld.\n",m,v[m-1]);
        }
        else{
            printf("The %lldth humble number is %lld.\n",m,v[m-1]);
        }
    }




    return 0;
}
