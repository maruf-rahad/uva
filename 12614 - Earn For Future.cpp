#include<bits/stdc++.h>
using namespace std;
int ara[100];

int dj(int e, int a)
{
    e--;
    if(ara[e]>a)
    {
        a = ara[e];
    }

    if(e==0)return a;
    else{
        dj(e,a);
    }
}

int main()
{
    //freopen("input.txt","w",stdout);
    int n,a,b,i,j,e;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&e);
        for(j=0;j<e;j++)
        {
            scanf("%d",&ara[j]);
        }


    a = -10;
    b = dj(e,a);

    printf("Case %d: %d\n",i,b);
    }










return 0;
}
