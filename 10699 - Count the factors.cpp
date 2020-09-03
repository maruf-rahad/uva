#include<bits/stdc++.h>
using namespace  std;
#define ll long long
#define mx 1000000
vector<int>v;
int ara[mx+10];

void sieve()
{
    ll i,j;
    v.push_back(2);
    for(i=3;i<=mx;i+=2)
    {
        if(ara[i]==0)
        {
            v.push_back(i);
            for(j=i*i;j<=mx;j+=2*i)
            {
                ara[j] = 1;
            }
        }
    }
}

int main()
{
    sieve();
    int n,m,a,b,i,j,x,y,s,sum;
    m = v.size();

    while(scanf("%d",&n)==1&&n!=0)
    {
        a = n;
        s = sqrt(n);
        sum=0;
        for(i=0;i<m&&v[i]<=s;i++)
        {
            if(n%v[i]==0)
            {
                sum++;
                while(n%v[i]==0)n/=v[i];
            }
        }
        if(n!=1)sum++;

        printf("%d : %d\n",a,sum);


    }












return 0;
}
