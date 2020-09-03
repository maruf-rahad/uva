#include<bits/stdc++.h>
using namespace std;
vector<int>v[1200];
int ara[20];

void precal()
{   v[0].push_back(1);
    v[1].push_back(1);

    for(int i=2;i<=400;i++)
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


    while(scanf("%d",&n)==1&&n!=0)
    {
        printf("%d! --\n",n);
        memset(ara,0,sizeof(ara));

        for(i=0;i<v[n].size();i++)
        {
            a = v[n][i];
            ara[a]++;
        }
        printf("(0) %d (1) %d (2) %d (3) %d (4) %d\n",ara[0],ara[1],ara[2],ara[3],ara[4]);
        printf("(5) %d (6) %d (7) %d (8) %d (9) %d\n",ara[5],ara[6],ara[7],ara[8],ara[9]);

    }





return 0;
}
