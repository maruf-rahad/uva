#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ara[50000];
ll n = 50000-10;
ll s;
vector<int>v;

void jingalala()
{
    ara[1] = 1;
    v.push_back(2);
    for(ll i=3;i<=n;i+=2)
    {
        if(ara[i]==0)
        {
            v.push_back(i);
            for(ll j=i*i;j<=n;j+=i)
            {
                ara[j] = 1;
            }
        }
    }
}
bool checkprime(int n)
{
    if(n==1)return false;
    for(ll i=0;i<s&&v[i]<n;i++)
    {
        if(n%v[i]==0)return false;
    }
    return true;
}
int main()
{
  //  freopen("output.txt","w",stdout);
    jingalala();
    s = v.size();

    ll i,j,a,b,x,y,first,second,mx,mn,n,m,flag,flag2,p,q;

    while(scanf("%lld %lld",&p,&q)==2)
    {
        mx = -9;
        mn = 1e18;
        flag = 0;
        flag2 = 0;
        for(i=p;i<=q;i++)
        {
            if(flag==0&&checkprime(i))
            {
                flag = 1;
                first = i;
            }
            else if(flag2==0&&checkprime(i))
            {
                flag2 = 1;
                second = i;
                mx = second-first;
                mn = mx;
                a = first;
                b = second;
                x = first;
                y = second;
            }
            else if(checkprime(i))
            {
                first = second;
                second = i;

                if(second-first>mx)
                {
                    a = first;
                    b = second;
                    mx = second-first;
                }
                if(second-first<mn)
                {
                    x = first;
                    y = second;
                     mn = second-first;
                }
            }
        }
        if(flag2==1)
            printf("%lld,%lld are closest, %lld,%lld are most distant.\n",x,y,a,b);
        else{
            printf("There are no adjacent primes.\n");
        }

    }









return 0;
}
