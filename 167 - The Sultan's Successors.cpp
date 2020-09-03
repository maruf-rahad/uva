#include<bits/stdc++.h>
using namespace std;
int ara[8][8],row[8],mx;

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
            sum+=ara[row[i]][i];
        }
        mx = max(sum,mx);
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
    int t,i,j;
    scanf("%d",&t);
    while(t--)
    {
        for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
            {
                scanf("%d",&ara[i][j]);
            }
        }
        mx = -9;
        memset(row,0,sizeof(row));
        backtrack(0);
        printf("%5d\n",mx);
    }








return 0;
}
