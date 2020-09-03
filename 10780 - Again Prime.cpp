#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 10010
#define F first
#define S second
vector<int>v;
vector<pair<int,int> >v2;
int ara[mx+10];
int sz;
void sieve()
{
    v.push_back(2);

    for(int i=3;i<=mx;i+=2)
    {
        if(ara[i]==0)
        {
            v.push_back(i);
            for(int j=i*i;j<=mx;j+=(2*i))
            {
                ara[j] = 1;
            }
        }
    }
}

void allFactor(int n)
{
    int s,i,sum;
    s = sqrt(n);
    for(i=0;i<sz&&v[i]<=s;i++)
    {
        sum = 0;
        if(n%v[i]==0)
        {
            while(n%v[i]==0)
            {
                sum++;
                n/=v[i];
            }
                   v2.push_back({v[i],sum});
        }
    }
    if(n!=1)
    {
        v2.push_back({n,1});
    }
    return ;
}

int makeAns(int n)
{
    int sz2 = v2.size();
    int mn = 1e9,ans,i,j,a,b;

    for(i=0;i<sz2;i++)
    {
        ans = 0;
        a = v2[i].F;
        b = v2[i].S;
        for(j=a;j<=n;j=j*a)
        {
            ans+=n/j;
        }
        //printf("%d %d\n",a,ans);
        mn = min(ans/b,mn);
    }
    return mn;
}
int main()
{
   // freopen("output.txt","w",stdout);
    sieve();
    sz = v.size();
    int i,j,n,m,a,b,x,y,t,k=0;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&m,&n);
        v2.clear();
        allFactor(m);

       /* for(i=0;i<v2.size();i++)
        {
            printf("%d %d\n",v2[i].F,v2[i].S);
        }*/

      //  printf("\n\n");

        x = makeAns(n);
        if(x<=0)printf("Case %d:\nImpossible to divide\n",++k);
        else
            printf("Case %d:\n%d\n",++k,x);
    }

return 0;
}
