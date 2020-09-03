#include<bits/stdc++.h>
using namespace std;
int ara[25][25];
int ase[25][25];
void zero()
{
    int i,j;
    for(i=0; i<=22; i++)
    {
        for(j=0; j<=22; j++)
        {

            ara[i][j] = 0;
        }
    }
}

void floydWarshal()
{
    int i,j,k;
    for(k=1; k<=20; k++)
    {
        for(i=1; i<=20; i++)
        {
            for(j=1; j<=20; j++)
            {
                if(ara[i][j]==0||ara[i][k]+ara[k][j]<ara[i][j])
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

    int n,a,b,i,j,x,y,z=0,m;
    zero();

    while(scanf("%d",&n)==1)
    {
        for(j=1; j<=n; j++)
        {
            scanf("%d",&a);
            ara[1][a] = 1;
            ara[a][1] = 1;

        }

        for(i=2; i<=19; i++)
        {
            scanf("%d",&n);
            for(j=1; j<=n; j++)
            {
                scanf("%d",&a);
                ara[i][a] = 1;
                ara[a][i] = 1;

            }
        }


        floydWarshal();


        printf("Test Set #%d\n",++z);

        scanf("%d",&m);
        for(i=1; i<=m; i++)
        {
            scanf("%d %d",&a,&b);

            x = max(a,b);
            y = min(a,b);
            if(a<=9)
                printf(" ");
            printf("%d to ",a);
            if(b<=9)
                printf(" ");
            printf("%d: %d\n",b,ara[y][x]);
        }
        printf("\n");
        zero();

    }











    return 0;
}
