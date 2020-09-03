#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
vector<ull>v;

void precal()
{
    v.push_back(1);
    for(ull i=1;i<=20;i++)
    {
        v.push_back(v[i-1]*i);
    }
}
int main()
{
   // freopen("output.txt","w",stdout);
    precal();
    string s;
    ull n,m,a,b,i,j,t,sum,k=0;
    ull ara[30];

    scanf("%llu",&t);
    while(t--)
    {
        cin>>s;
        memset(ara,0,sizeof(ara));
        for(i=0;i<s.size();i++)
        {
            a = s[i]-'A';
            ara[a]++;
        }
        sum = v[s.size()];

        for(i=0;i<=26;i++)
        {
            a = ara[i];
            sum/=v[a];
        }

        printf("Data set %llu: %llu\n",++k,sum);


    }










return 0;
}
