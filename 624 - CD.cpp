#include<bits/stdc++.h>
using namespace std;
int ara[25];
int n,sum,flag,ma,m;
vector<int>v;

void cd(int sum,int i)
{

    if(sum>n)return ;
    if(sum>ma)
    {
        ma = sum;
    }

    if(i>m)
    {
        return;
    }


    cd(sum+ara[i++],i);

    cd(sum,i);




}

void konta_nibo(int sum,int i)
{
    if(flag==1)
    {
        return ;
    }

    if(sum>n)return ;

    if(sum==ma)
    {
         flag = 1;

        return ;
    }

    if(i>m)
    {
        return;
    }


    konta_nibo(sum+ara[i++],i);
    if(flag==1)
    {
    v.push_back(ara[i-1]);
    }

    konta_nibo(sum,i);





}


int main()
{
    int i,j,a,b;


    while(scanf("%d",&n)==1)
    {
        scanf("%d",&m);
        for(i=1;i<=m;i++)
        {
            scanf("%d",&ara[i]);
        }
        ma = 0;

        sum = 0;
        ma = 0;
        flag = 0;
        v.clear();

        cd(0,1);

        konta_nibo(0,1);


        for(i=v.size()-1;i>=0;i--)
        {
            printf("%d ",v[i]);
        }
        printf("sum:%d\n",ma);

    }


return 0;
}
