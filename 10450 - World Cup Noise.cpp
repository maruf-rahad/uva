#include<bits/stdc++.h>
using namespace std;
#define ll long long
/*void make(int last,int att,int n)
{
   // printf("getting %d %d\n",last ,att);
    if(att==n+1)
    {
        sum++;
       for(int i=1;i<=n;i++)
        {
            printf("%d ",ara[i]);
        }
        printf("\n");
        return;
    }
    if(last==0||last==1)
    {
        ara[att] = 0;
      //  printf("calling 1\n");
        make(0,att+1,n);
        //printf("returning 1\n");
    }
    if(last==0)
    {
        ara[att] = 1;
      //  printf("calling 2\n");
        make(1,att+1,n);
      //  printf("returning 2\n");
    }



}*/
int main()
{
    ll n,a,b,i,j,x,y,t,k=0;
    ll ara[100];

    ara[1] = 2;
    ara[2] = 3;

    for(i=3;i<=52;i++)
    {
        ara[i] = ara[i-1]+ara[i-2];
    }
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        printf("Scenario #%lld:\n%lld\n\n",++k,ara[n]);
    }


















return 0;
}
