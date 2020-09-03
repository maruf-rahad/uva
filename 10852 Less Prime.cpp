#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int ara[10010];
int n = 10005;

void sieve()
{
    v.push_back(2);

    for(int i=3;i<=n;i+=2)
    {
        if(ara[i]==0)
        {
            v.push_back(i);
            for(int j=i*i;j<=n;j+=i)
            {
                ara[j] = 1;
            }
        }
    }
}
int main()
{
    //freopen("output.txt","w",stdout);
    sieve();
    int t,i,s,x,y,p,a,b,flag,mx;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&a);
        flag = 0;
        mx = -99;
        for(p=1;p<=a;p++)
        {
            for(i=1;i<=a&&v[i]<=n;i++)
            {
                if((p*v[i])<=a&&((p+1)*v[i])>a)
                {
                    b = a-p*v[i];
                    if(b>=mx)
                    {
                        mx = b;
                        x = v[i];
                    }
                }
            }
        }


        printf("%d\n",x);



    }

    return 0;
}
