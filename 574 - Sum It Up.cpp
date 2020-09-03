#include<bits/stdc++.h>
using namespace std;
int ara[20];
int used[20];
int n,m,flag,x;
vector<int>v;
vector<int>v2[1200];


void make(int sum)
{
    int a;
    if(sum>n)
        return;

    if(sum==n)
    {
        int flag2 = 0;
        for(int j = 0;j<x;j++)
        {
            int sum = 0;
            a = v2[j].size();
            if(a==v.size())
            {
                for(int k = 0;k<a;k++)
                {
                    if(v[k]==v2[j][k])sum++;
                }
            }
            if(a==sum)flag2 = 1;
        }

        flag = 1;
        if(flag2==0)
        {

            printf("%d",v[0]);
            v2[x].push_back(v[0]);

            for(int i=1; i<v.size(); i++)
            {
                printf("+%d",v[i]);
                v2[x].push_back(v[i]);

            }

            printf("\n");
            x++;
            return;

        }

    }

    for(int i=1; i<=m; i++)
    {
        int x = v.size();
        if(used[i]==0&&sum+used[i]<=n&&(x==0||v[x-1]>=ara[i]))
        {
            v.push_back(ara[i]);
            used[i] = 1;
            make(sum+ara[i]);
            used[i] = 0;
            while(i<n&&ara[i]==ara[i+1])
                i++;
            v.pop_back();

        }
    }

}
int main()
{
    //freopen("output.txt","w",stdout);
    int i,a;
    while(scanf("%d %d",&n,&m)==2)
    {
        if(n==0&&m==0)break;

        for(i=0;i<1198;i++)v2[i].clear();
        for(i=1; i<=m; i++)
        {
            scanf("%d",&ara[i]);
        }
        v.clear();


        flag = 0;
        x = 0;


        sort(ara+1,ara+m+1);
        for(i=1; i<=m/2; i++)
        {
            a = ara[i];
            ara[i] = ara[m-i+1];
            ara[m-i+1] = a;
        }

        printf("Sums of %d:\n",n);

        make(0);

        if(flag == 0)
        {
            printf("NONE\n");
        }




    }







    return 0;
}
