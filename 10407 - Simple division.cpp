#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
    int n,m,a,b,i,j,x,y;

    while(scanf("%d",&n)==1&&n!=0)
    {
        v.clear();
        while(scanf("%d",&m)==1&&m!=0)
        {
            v.push_back(abs(n-m));
            n = m;
        }
        x = v[0];
        for(i=0;i<v.size();i++)
        {
            x = __gcd(x,v[i]);
        }
        printf("%d\n",x);
    }











    return 0;
}
