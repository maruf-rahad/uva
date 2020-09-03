#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m,i,j,x,y,a,b;

    while(scanf("%d %d",&n,&m)==2)
    {
         vector<int>v[1000005];

         for(i=1;i<=n;i++)
         {
             scanf("%d",&a);
             v[a].push_back(i);
         }

         for(i=1;i<=m;i++)
         {
            scanf("%d %d",&a,&b);

            if(a>v[b].size())
            {
                printf("0\n");
            }
            else{
                printf("%d\n",v[b][a-1]);
            }
         }
    }





    return 0;
}
