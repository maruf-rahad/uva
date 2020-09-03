#include<bits/stdc++.h>
using namespace std;
int ara[110];
int n,flag;

void recur(int att)
{
    if(att==n||flag==1)
        return;

    if(ara[att]>=ara[att+1])
    {
        flag = 1;
        return;
    }
    recur(att+1);




}
int main()
{
    int t;

    scanf("%d",&t);
    while(t--)
    {

        scanf("%d",&n);

        for(int i = 1; i<=n; i++)
        {
            scanf("%d",&ara[i]);

        }

        sort(ara+1,ara+n+1);

        flag = 0;
        recur(1);

        if(flag==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

    }










    return 0;
}
