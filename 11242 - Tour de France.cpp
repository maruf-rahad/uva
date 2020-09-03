#include<bits/stdc++.h>
using namespace std;
vector<float>v;
vector<float>v2;
vector<float>v3;
float ara[120];
float ara2[120];

int main()
{
    float n,a,b,m;
    int i,j;

    while(scanf("%f",&n)==1&&n!=0)
    {
        v.clear();
        v2.clear();
        scanf("%f",&m);

        for(i=1;i<=n;i++)
        {
            scanf("%f",&ara[i]);
        }
        for(i=1;i<=m;i++)
        {
            scanf("%f",&ara2[i]);
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                a = ara2[j]/ara[i];
                v.push_back(a);
            }
        }

        sort(v.begin(),v.end());

        for(i=1;i<v.size();i++)
        {
            a = v[i]/v[i-1];
            v2.push_back(a);
        }

        a = *max_element(v2.begin(),v2.end());

        printf("%0.2f\n",a);
    }









return 0;
}
