#include<bits/stdc++.h>
using namespace std;
vector<int>v;

int main ()
{
    int t,n,m,a,b,i,j,x,y,mn,sum;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        v.clear();
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            v.push_back(a);
        }
        mn = 1e9;
        for(i=0;i<n;i++)
        {
            sum = 0;
            for(j=0;j<n;j++)
            {
                sum+=(abs(v[i]-v[j]));
            }
            mn = min(mn,sum);
        }
        printf("%d\n",mn);
    }






return 0;
}
