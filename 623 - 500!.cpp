#include<bits/stdc++.h>
using namespace std;
vector<int>v[1200];

void precal()
{   v[0].push_back(1);
    v[1].push_back(1);

    for(int i=2;i<=1100;i++)
    {
        int sum = 0;
        for(int j=0;j<v[i-1].size();j++)
        {
            int x = v[i-1][j]*i+sum;
            v[i].push_back(x%10);
            sum = x/10;
        }
        while(sum!=0)
        {
            v[i].push_back(sum%10);
            sum/=10;
        }

    }

    /*for(int i=1;i<=10;i++)
    {
        printf("%d : ",i);
        for(int j=0;j<v[i].size();j++)
        {
            printf("%d",v[i][j]);
        }
        printf("\n");
    }*/




}
int main()
{
    //freopen("output.txt","w",stdout);
    int n,m,a,b,i,j,x,y,sum;

    precal();


    while(scanf("%d",&n)==1)
    {
        printf("%d!\n",n);
        for(i=v[n].size()-1;i>=0;i--)
        {
            printf("%d",v[n][i]);
        }
        printf("\n");
    }





return 0;
}
