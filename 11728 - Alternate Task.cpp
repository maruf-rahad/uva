#include<bits/stdc++.h>
using namespace std;
#define mx 1000
int ara[1111];
int divisor[1111];
void cal_divisor()
{
    int i,j,n = mx;

    for(i=1; i<=n; i++)
    {
        for(i=1; i<=n; i++)
        {
            for(j=i; j<=n; j+=i)
            {
                divisor[j]+=i;
            }
        }
        for(i=1; i<=n; i++)
        {
            if(divisor[i]<=mx)
            {
                ara[divisor[i]] = i;
            }
        }
    }

}

int main()
{
    cal_divisor();

    int n,m,a,b,i,j,x,y,k=0;
    while(scanf("%d",&n)==1&&n!=0)
    {
        printf("Case %d: ",++k);
        if(ara[n]==0)
        {
            printf("-1\n");
        }
        else{
            printf("%d\n",ara[n]);
        }
    }











    return 0;
}
