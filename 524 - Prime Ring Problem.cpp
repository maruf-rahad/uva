#include<bits/stdc++.h>
using namespace std;
int ara[50];
int used[50],n,number[50];
void prime()
{
    int i,j;
    ara[1] = 1;
    ara[0] = 1;
    for(i=2;i<=45;i++)
    {
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                ara[i] = 1;
                break;
            }
        }
    }

}

void zero()
{
    for(int i = 1;i<=n+5;i++)
    {
        used[i] = 0;
    }
}
void generat(int att)
{
    int i;

    //printf("att = %d\n",att);
    if(att==n+1)
    {
        if(ara[number[att-1]+1]==1)return;
       // printf("printing : \n");
        for(i=1;i<=n;i++)
        {
            printf("%d",number[i]);
            if(i!=n)printf(" ");
            else printf("\n");
        }
        return;
    }

    for(i=1;i<=n;i++)
    {

        if(used[i]==0&&ara[number[att-1]+i]==0)
        {

            number[att] = i;
           // printf("number %d %d\n",att,i);
            used[i] = 1;
            generat(att+1);
            used[i] = 0;
        }
    }




}

int main()
{

    int i,j=0,x,y;
    prime();

    while(scanf("%d",&n)==1)
    {

        zero();

        number[1] = 1;
        used[1] = 1;
        if(j>0)printf("\n");

        printf("Case %d:\n",++j);


        generat(2);

    }






























    return 0;
}
