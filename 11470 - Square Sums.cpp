#include<bits/stdc++.h>
using namespace std;
int ara[20][20];
int main()
{
   // freopen("output.txt","w",stdout);
    int n,m,a,b,i,j,x,y,sum,k = 0;

    while(scanf("%d",&n)==1)
    {
        if(n==0)break;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                scanf("%d",&ara[i][j]);
            }
        }
        m = n;
        printf("Case %d:",++k);
        for(i=1;i<=n/2;i++)
        {
            sum = 0;
            for(j=i;j<=m;j++)
            {
                sum+=ara[i][j];
                sum+=ara[m][j];
            }
            for(j = i+1;j<m;j++)
            {
                sum+=ara[j][i];
                sum+=ara[j][m];
            }
            m--;

            printf(" %d",sum);


        }
        if(n%2==1)
        {
            printf(" %d\n",ara[n/2+1][n/2+1]);
        }
        else{
            printf("\n");
        }
    }














return 0;
}
