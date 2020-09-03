#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","w",stdout);
    vector<int>v;
    int n,x,i,j,a,b;

    while(scanf("%d",&n)==1 && n>0)
    {
        v.clear();
        int flag = 0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a);
            if(a!=0)
            {
                v.push_back(a);
                flag = 1;
            }

        }
    if(flag == 1)
    {

    for(i=0;i<v.size();i++)
    {

        if(i==0)
        {
            printf("%d",v[i]);
        }
        else{
            printf(" %d",v[i]);
        }


    }

    }
    if(flag == 0)
    {
        printf("0");
    }
    printf("\n");

    }

return 0;
}
