#include<bits/stdc++.h>
using namespace std;
#define mx 1000000
#define ll long long
int ara[mx+10];
vector<int>v;

struct node
{
    int mu,mn;
};
node ara2[mx+10];

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

void make()
{
    int n,sum,flag,m,s,i,j;
    m = v.size();
    ara2[1].mu = 1;
    ara2[1].mn = 1;

    for(i=2;i<=mx;i++)
    {
        n=i;
        s = sqrt(n);
        sum = 0;
        flag = 0;
        for(j=0;j<m&&v[j]<=s;j++)
        {
            if(n%v[j]==0)
            {
                sum++;
                n/=v[j];
                if(n%v[j]==0)
                {
                    flag = 1;
                    break;
                }
            }
        }
        if(flag==1)
        {
            ara2[i].mu = 0;
            ara2[i].mn = ara2[i-1].mn;
        }
        else{
            if(n!=1)sum++;
            if(sum%2==0)
            {
                ara2[i].mu = 1;
                ara2[i].mn = ara2[i-1].mn+1;
            }
            else{
                ara2[i].mu = -1;
                ara2[i].mn = ara2[i-1].mn-1;
            }
        }
    }


}
int main()
{

    int n,m,a,b,i,j,x,y;
    sieve();
    make();

    while(scanf("%d",&n)==1&&n!=0)
    {
        printf("%8d%8d%8d\n",n,ara2[n].mu,ara2[n].mn);
    }












return 0;
}
