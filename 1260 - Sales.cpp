#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
    int n,a,b,i,j,sum,t;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        v.clear();
        sum = 0;

        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            v.push_back(a);
        }
        for(i=1;i<v.size();i++)
        {
            for(j=0;j<i;j++)
            {
                if(v[j]<=v[i]){
                    sum++;
                }
            }
        }
        printf("%d\n",sum);


    }











return 0;
}
