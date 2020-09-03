#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("output.txt","w",stdout);
    long long n,sum,sub,a,i,z;
    while(scanf("%lld",&n)==1)
    {
        vector<int>v;
        z = 0;

        while(n!=0)
        {
            a = n%10;
            n = n/10;
            if(a==0)
            {
                z++;
                continue;
            }
            v.push_back(a);

        }

       sort(v.begin(),v.end());
       sum = 0;
       sub = 0;
    //    printf("z = %d\n",z);
       for(i=v.size()-1;i>=0;i--)
       {

                sum = sum*10+v[i];

       }
        for(i=1;i<=z;i++)
        {
            sum = sum*10;
        }
        //printf("sum = %d\n",sum);
        sub = 0;
        sub = sub*10+v[0];
       // printf("sub = %d\n",sub);
        for(i=1;i<=z;i++)
        {
            sub = sub*10;
        }
        for(i=1;i<v.size();i++)
        {
            sub = sub*10+v[i];
        }


       printf("%lld - %lld = %lld = 9 * %lld\n",sum,sub,sum-sub,(sum-sub)/9);

    }










return 0;
}
