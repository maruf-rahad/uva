#include<bits/stdc++.h>
using namespace std;
int mn = 0;
int x = 0;
int flag;

bool check(int ara[],int sz)
{
    for(int i=1;i<sz;i++)
    {
        if(ara[i]<ara[i-1])return false;
    }
    return true;
}
void pass(int ara[],int sz,int sum)
{
    if(check(ara,sz))
    {
        if(sum<mn)
        {
            mn = sum;
            x = 1;
        }
        else if(sum==mn)
        {
            x++;
        }
        return;
    }
    for(int i=1;i<sz;i++)
    {
        if(ara[i]<ara[i-1])
        {
            flag = 1;
            swap(ara[i],ara[i-1]);
            pass(ara,sz,sum+1);
            swap(ara[i],ara[i-1]);

        }
    }

}


int main()
{
    int ara[10],n,k=0;

    while(scanf("%d",&n)==1)
    {
        if(n==0)break;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&ara[i]);
        }
        mn = 99999;
        x = 0;
        flag = 0;
        pass(ara,n,0);
        if(flag==0)x = 0;
        printf("There are %d swap maps for input data set %d.\n",x,++k);

    }














    return 0;
}
