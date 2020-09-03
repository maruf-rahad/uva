#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
   // freopen("output.txt","w",stdout);
    int n,m,a,b,i,j,y,s,x,sum;
    double xx,yy;
    while(scanf("%d",&n)==1&&n!=0)
    {
        v.clear();
        sum = 0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            v.push_back(a);
        }
        s = v.size();

        s--;
        x = (s*(s+1))/2;

        for(i=0;i<=s;i++)
        {
            for(j=0;j<=s;j++)
            {
                if(i<j&&__gcd(v[i],v[j])==1)
                {
                    sum++;
                }
            }
        }

        if(sum==0)
        {
            printf("No estimate for this data set.\n");
        }
        else{
            printf("%0.6lf\n",sqrt((((double)x)*6.0)/((double)sum)));
        }

    }











return 0;
}
