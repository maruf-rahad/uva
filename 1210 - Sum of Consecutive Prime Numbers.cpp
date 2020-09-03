#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int ara[11111];

void sieve()
{
    int i,j;
    v.push_back(2);
    for(i=4;i<=10005;i+=2)ara[i] = 1;

    for(i=3;i<=10005;i+=2)
    {
        if(ara[i]==0)
        {
            v.push_back(i);

            for(j=i*i;j<=10005;j = j+i*2)ara[j] = 1;
        }
    }
}

int main()
{
    sieve();

    int n,m,i,j,x,y,sum;

    while(scanf("%d",&n)==1)
    {
        if(n==0)break;
        sum = 0;
        m = v.size();
        x = 0;
        for(i=0;i<m&&v[i]<=n;i++)
        {
            sum = 0;
            for(j=i;j<m&&v[j]<=n;j++)
            {
                sum+=v[j];
                if(sum==n)
                {
                    x++;
                }
                else if(sum>n){
                    break;
                }
            }
        }

        printf("%d\n",x);
    }











return 0;
}
