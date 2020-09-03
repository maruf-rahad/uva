#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ara[10000010];
ll n = 10000005;
vector<int>v;
int flag;
void sieve()
{
    ara[1] = 1;
    for(ll i=4;i<=n;i+=2)
        ara[i] = 1;

    for(ll i=3;i<=n;i+=2)
    {
        if(ara[i]==0)
        {
            //prime.push_back(i);
            for(ll j=i*i;j<=n;j+=i)
            {
                ara[j] = 1;
            }
        }
    }
}

/*void make(int x,int sum,int y)
{
    if(sum==x&&y==4)
    {
        flag=1;
        return;
    }

    for(int i=1;i<=x;i++)
    {
        if(flag==0&&y<4&&ara[i]==0&&i+sum<=x)
        {
            v.push_back(i);
           // printf("nitasi %d\n",i);
            make(x,i+sum,y+1);
            if(flag==0)
                v.pop_back();
          //  printf("falaitasi %d\n",i);
        }
    }
}*/
int main()
{
    freopen("output.txt","w",stdout);
    sieve();
    ll i,j,a,b,x,y,s;

    while(scanf("%lld",&a)==1)
    {
        flag = 0;
        if(a<=7){
            printf("Impossible.\n");
            flag = 1;
            continue;
        }
        else if(a==8)
        {
            printf("2 2 2 2\n");
            flag = 1;
            continue;
        }
        else{
                if(a%2==0)
                {
                    x = 2;
                    y = 2;
                }
                else{
                    x = 2;
                    y = 3;
                }

            s = a-(x+y);
            for(i=1;i<=s;i++)
            {
               if(ara[i]==0&&ara[s-i]==0)
               {
                   printf("%lld %lld %lld %lld\n",x,y,i,s-i);
                   flag=1;
                   break;
               }
            }

        }
        if(flag==0)printf("Impossible.\n");
    }









return 0;
}
