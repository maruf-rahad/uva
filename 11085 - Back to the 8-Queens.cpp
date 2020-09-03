#include<bits/stdc++.h>
using namespace std;
int row[8],ara[8],mn;

bool place(int r,int c)
{
    for(int i=0;i<c;i++)
    {
        if(row[i]==r||abs(row[i]-r)==abs(i-c))return false;
    }
    return true;
}

void backtrack(int c)
{
    if(c==8)
    {
        int sum = 0;
        for(int i=0;i<8;i++)
        {
            if(ara[i]!=row[i]+1)sum++;
        }
        mn = min(mn,sum);
        return;
    }

    for(int r=0;r<8;r++)
    {
        if(place(r,c))
        {
            row[c] = r;
            backtrack(c+1);
        }
    }
}
int main()
{
    //freopen("output.txt","w",stdout);
    int n,m,i,j,k=0;

    while(scanf("%d",&ara[0])==1)
    {
        for(i=1;i<8;i++)scanf("%d",&ara[i]);
        mn = 99999;
        backtrack(0);
        printf("Case %d: %d\n",++k,mn);
    }









return 0;
}
