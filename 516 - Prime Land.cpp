#include<bits/stdc++.h>
using namespace std;
#define mx 32767
#define ll long long
int ara[mx+10];
vector<int>v;
vector<pair<int,int> > v2;
int powi(int n,int m)
{
    int sum = 1;
    for(int i=1;i<=n;i++)
    {
        sum = sum*m;
    }
    return sum;
}
void sieve()
{
    ll i,j;
    v.push_back(2);
    for(i=4;i<=mx;i+=2)ara[i] = 1;
    for(i=3;i<=mx;i+=2)
    {
        if(ara[i]==0)
        {
            v.push_back(i);
            for(j=i*i;j<=mx;j+=2*i)ara[j] = 1;
        }
    }
}
int main()
{
    //freopen("output.txt","w",stdout);
    sieve();
    int i,j,n,m,a,b,x,y,sum;
    string s;
    while(getline(cin,s))
    {
        v2.clear();
        sum = 1;
        if(s=="0")break;
        stringstream ss(s);
        while(ss>>x)
        {
            ss>>y;
            sum*=powi(y,x);
        }
        sum--;
        m = v.size();
        int s = sqrt(sum);
        for(i=0;i<m&&v[i]<=s;i++)
        {
            if(sum%v[i]==0)
            {
                x = 0;
                while(sum%v[i]==0)
                {
                    x++;
                    sum/=v[i];
                }
                v2.push_back({v[i],x});
            }
        }
        if(sum!=1)v2.push_back({sum,1});
        sort(v2.begin(),v2.end());
        s = v2.size();
        printf("%d %d",v2[s-1].first,v2[s-1].second);
        for(i=s-2;i>=0;i--)
        {
            printf(" %d %d",v2[i].first,v2[i].second);
        }
        printf("\n");
    }











return 0;
}
