#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>v;
#define mx 5000000
ll powl(ll a,ll b)
{
    ll sum = 1;
    for(int i=1;i<=b;i++)
    {
        sum = sum*a;
    }
    return sum;
}
int main()
{
    ll n,m,a,b,i,j,sum,t,flag,x;

    scanf("%lld",&t);
    while(t--)
    {
        v.clear();
        while(scanf("%lld",&a)==1&&a!=0)
        {
            v.push_back(a);
        }
        sort(v.begin(),v.end());

        int n = v.size();
        x = 1;
        sum = 0;
        flag = 0;
        for(i=n-1;i>=0;i--)
        {
            sum+=(2*(powl(v[i],x)));
            x++;
            if(sum>mx)
            {
                flag = 1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%lld\n",sum);
        }
        else{
            printf("Too expensive\n");
        }
    }













return 0;
}
