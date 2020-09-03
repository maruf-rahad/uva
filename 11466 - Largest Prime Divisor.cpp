#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 10000000
ll ara[mx+10];
vector<ll>v;
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
  //  freopen("output.txt","w",stdout);
    sieve();
    ll i,j,n,m,a,b,x,y,flag,mxx,s,flag2;
    m = v.size();
        while(scanf("%lld",&n)==1&&n!=0)
        {
            n = abs(n);
            flag = 0;
            flag2 = 0;
            mxx = -1;
            s = sqrt(n);
            for(i=0;i<m&&v[i]<=s;i++)
            {
                if(n%v[i]==0)
                {
                    if(flag==1)
                    {
                        flag2 = 1;
                    }
                    flag = 1;
                    mxx = max(v[i],mxx);
                    while(n%v[i]==0)n/=v[i];
                }
            }
            if(n!=1)
            {
                if(flag==1)flag2=1;
                mxx = max(mxx,n);
            }

            if(flag2==0)
            {
                printf("-1\n");
            }
            else{
                printf("%lld\n",mxx);
            }

        }













return 0;
}
