#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("input.txt","w",stdout);
    int n,a,b,i,j,sum,k,h,m,c,x,y;
    char str;
    vector<int>v;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        v.clear();
        scanf("%d %d%c%d",&k,&h,&str,&m);
        x = h*60+m;

         for(j=1;j<=k;j++)
         {
             scanf("%d%c%d %d",&a,&str,&b,&c);
             y = a*60+b;
             sum = y-x;
             if(sum<0)
             {
                 sum = sum+1440;
             }
             v.push_back(sum+c);
         }
         a = *min_element(v.begin(),v.end());
         printf("Case %d: %d\n",i,a);
    }

return 0;
}
