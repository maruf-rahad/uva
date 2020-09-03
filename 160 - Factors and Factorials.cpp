#include<bits/stdc++.h>
using namespace std;
#define mx 100
int ara[110];
int cnt[110];
vector<int>v;
vector<int>v2;
void sieve()
{
    v.push_back(2);
    ara[1] = 1;
    for(int i=4;i<=mx;i+=2)ara[i] = 1;
    for(int i=3;i<=mx;i+=2)
    {
        if(ara[i]==0)
        {
            v.push_back(i);
            for(int j=i*i;j<=mx;j+=i)
            {
                ara[j] = 1;
            }
        }
    }
}
void primeFactor(int n)
{
    int s,m,i;
    m = v.size();
    s = sqrt(n);
    for(i=0;i<m&&v[i]<=s;i++)
    {
        if(n%v[i]==0)
        {
            while(n%v[i]==0){
                    cnt[v[i]]++;
                    n/=v[i];
            }
        }
    }
    if(n!=1)cnt[n]++;
}
int main()
{
    sieve();
    int n,i,j,sum,s,l,m,a,b,x;
    l = v.size();


    while(scanf("%d",&n)==1&&n!=0)
    {
        memset(cnt,0,sizeof(cnt));
        for(i=2;i<=n;i++)
        {
            primeFactor(i);
        }
        v2.clear();
        printf("%3d! =",n);
        x = 0;

       for(i=1;i<=n;i++)
       {
           if(ara[i]==0)
           {
               if(x%15==0&&x>1)printf("\n      ");
               x++;
               printf("%3d",cnt[i]);
           }
       }

        printf("\n");
    }













return 0;
}
