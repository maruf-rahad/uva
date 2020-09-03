#include<bits/stdc++.h>
using namespace std;
vector<int>v[1111];
vector<int>v2;

void precal()
{
    int i,sum,j,a;
    v[0].push_back(1);
    for(i=1;i<=1000;i++)
    {
        sum = 0;
        for(j=0;j<v[i-1].size();j++)
        {
            a = v[i-1][j]*i+sum;
            v[i].push_back(a%10);
            sum = a/10;
        }
        while(sum!=0)
        {
            v[i].push_back(sum%10);
            sum/=10;
        }
    }
}

void allsum()
{
    int i,j,sum;
    for(i=0;i<=1000;i++)
    {
        sum = 0;
        for(j=0;j<v[i].size();j++)
        {
            sum+=v[i][j];
        }
        v2.push_back(sum);
    }



}
int main()
{
    int i,j,n,m,a,b;
    precal();
    allsum();
    while(scanf("%d",&n)==1)
    {
        printf("%d\n",v2[n]);
    }










}
