#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,i,j,x,y,sum,m ,t=0,k;

    vector<int>v;

    while(scanf("%d",&n)==1)
    {
        v.clear();
        t++;
        if(n==0)break;

        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            v.push_back(a);
        }
         printf("Case %d:\n",t);

        scanf("%d",&m);


        for(i=1;i<=m;i++)
        {

            scanf("%d",&a);
            int mi = 9999999;

            for(j=0;j<v.size();j++)
            {
                for(k=0;k<v.size();k++)
                {
                    if(j!=k)
                    {

                    b = v[j]+v[k];


                    c = abs(b-a);

                    if(c<mi)
                    {


                        mi = c;
                        x = b;
                    }


                    }
                }
            }
            printf("Closest sum to %d is %d.\n",a,x);
        }

    }







return 0;
}
