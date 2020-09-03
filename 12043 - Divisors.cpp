#include<bits/stdc++.h>
using namespace std;
#define mx 100000
#define ll long long
int cntdiv[mx+10];
ll sumdiv[mx+10];
void sieveDivisor()
{
    ll i,j;
    cntdiv[1] = 1;
    sumdiv[1] = 1;
    for(i=2; i<=mx; i++)
    {
        cntdiv[i]+=2;
        sumdiv[i]+=(i+1);
        for(j=i+i; j<=mx; j+=i)
        {
            cntdiv[j]++;
            sumdiv[j]+=i;
        }
    }
}
int main()
{
   // freopen("output.txt","w",stdout);
    sieveDivisor();

    ll n,m,a,b,i,j,x,y,t,k;

    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld %lld",&a,&b,&k);
        x = 0;
        y = 0;
        for(i=a; i<=b; i++)
        {
            if(i%k==0)
            {
                x+=cntdiv[i];
                y+=sumdiv[i];
                i+=(k-1);
            }
        }
        printf("%lld %lld\n",x,y);
    }












    return 0;
}
