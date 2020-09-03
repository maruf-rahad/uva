#include<bits/stdc++.h>
using namespace std;
int ara[11][11];
int ara2[11];
int ara3[11][11];

void inc(int n)
{
    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=n;j++)
        {
            ara[i][j]++;
            if(ara[i][j]==10)ara[i][j] = 0;
        }
    }
}
void dec(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            ara[i][j]--;
            if(ara[i][j]==-1)
                ara[i][j] = 9;
        }
    }
}

void row(int a,int b,int n)
{
    for(int i = 1;i<=n;i++)
    {
        ara2[i] = ara[a][i];
        ara[a][i] = ara[b][i];
        ara[b][i] = ara2[i];
    }
}

void col(int a,int b,int n)
{
    for(int i=1;i<=n;i++)
    {
        ara2[i] = ara[i][a];
        ara[i][a] = ara[i][b];
        ara[i][b] = ara2[i];
    }
}

void transpose(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            ara3[j][i] = ara[i][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            ara[i][j] = ara3[i][j];
        }
    }
}


int main()
{
   // freopen("output.txt","w",stdout);
    int t,n,m,a,b,i,j,x,y,k = 0;
    string s;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            cin>>s;
            for(j=0;j<n;j++)
            {
                ara[i][j+1] = s[j]-'0';
            }
        }

        scanf("%d",&m);
        while(m--)
        {
            cin>>s;

            if(s=="inc")
            {
                inc(n);
            }
            else if(s=="dec")
            {
                dec(n);
            }
            else if(s=="row")
            {
                scanf("%d %d",&a,&b);
                row(a,b,n);
            }
            else if(s=="col")
            {
                scanf("%d %d",&a,&b);
                col(a,b,n);
            }
            else{
                transpose(n);
            }


        }

        printf("Case #%d\n",++k);

        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                printf("%d",ara[i][j]);
            }
            printf("\n");
        }
        printf("\n");






    }














return 0;
}
