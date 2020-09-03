#include<bits/stdc++.h>
using namespace std;
int ara[102][102];
void zero()
{
    int i,j;
    for(i=0; i<=100; i++)
    {
        for(j=0; j<=100; j++)
        {
            ara[i][j] = 0;
        }
    }
}
void floydwarshal()
{
    int i,j,k;
    for(k=1; k<=100; k++)
    {
        for(i=1; i<=100; i++)
        {
            for(j = 1; j<=100; j++)
            {
                if(i==j)continue;
                if(ara[i][j] == 0||ara[i][k]+ara[k][j]<ara[i][j])
                {
                    if(ara[i][k]!=0&&ara[k][j]!=0)
                    {
                        ara[i][j] = ara[i][k]+ara[k][j];
                    }
                }
            }
        }
    }
}
int main()
{
   // freopen("output.txt","w",stdout);
    int n,m,a,b,i,j,y=0,sum,x;
    zero();
    while(scanf("%d %d",&a,&b)==2)
    {
        if(a==0&&b==0)
            break;
        ara[a][b] = 1;

        while(scanf("%d %d",&a,&b)==2)
        {
            if(a==0&&b==0)
                break;

            ara[a][b] = 1;
        }

        floydwarshal();

        double c,d;
        sum = 0;
        x = 0;
        for(i=1; i<=100; i++)
        {
            for(j=1; j<=100; j++)
            {
                if(ara[i][j]!=0)
                {
                    sum+=ara[i][j];
                    x++;
                }
            }
        }

        printf("Case %d: average length between pages = %0.3lf clicks\n",++y,(double)sum/(double)x);
        zero();
    }







    return 0;
}
