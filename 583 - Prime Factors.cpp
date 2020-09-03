#include<bits/stdc++.h>
using namespace std;
long long ara[70000];
vector<long long>v;
int n = 70000;

void sieve()
{
    long long i,j;
    v.push_back(2);

    for(i=3;i<=n;i = i+2)
    {
        if(ara[i]==0)
        {
            v.push_back(i);

            for(j = i*i ;j<=n;j=j+2*i)
            {
                ara[j]=1;
            }
        }
    }


}

int main()
{
    //freopen("output.txt","w",stdout);
    sieve();
    long long a,b,x,y,m;

    while(scanf("%lld",&m)==1&&m!=0)
    {
        int flag = 0;
        printf("%lld =",m);
        if(m<0)
        {
            printf(" -1");
            m = -m;
            flag = 1;
        }
        for(int i=0;i<v.size();i++)
        {
            while(m%v[i]==0)
            {
                if(flag==1)
                {
                     printf(" x %lld",v[i]);
                }
                else{
                    printf(" %lld",v[i]);
                    flag = 1;
                }

                   m = m/v[i];
            }
              if(m==1)break;
        }
        if(m>1&&flag==1)
        {
            printf(" x %lld",m);
        }
        else if(m>1&&flag==0)
        {
            printf(" %lld",m);
        }
        printf("\n");
    }








return 0;
}
