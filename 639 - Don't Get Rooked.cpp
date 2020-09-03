#include<bits/stdc++.h>
using namespace std;
char ch[6][6];
int n,x;
bool check(int a,int b)
{
    int i,j,flag = 0;

    for(i=b;i<=n;i++)
    {
        if(ch[a][i]=='1')
        {
            flag = 1;
        }
        else if(ch[a][i]=='X')
        {
            break;
        }
    }
    for(i=b;i>=1;i--)
    {
        if(ch[a][i]=='1')
        {
            flag = 1;
            break;
        }
        else if(ch[a][i]=='X')
        {
            break;
        }
    }
    for(i=a;i<=n;i++)
    {
        if(ch[i][b]=='1')
        {
            flag = 1;
            break;
        }
        else if(ch[i][b]=='X')
        {
            break;
        }
    }
    for(i=a;i>=1;i--)
    {
        if(ch[i][b]=='1')
        {
            flag = 1;
            break;
        }
        else if(ch[i][b]=='X')
        {
            break;
        }
    }

    if(flag==1)
        return false;
    else
        return true;

}
void coount()
{
    int i,j,sum = 0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(ch[i][j]=='1')
            {
                sum++;
            }
        }
    }
    if(sum>x)
    {
        x = sum;
    }
}
void rook()
{
    int i  , j;

    for(i=1;i<=n;i++)
    {
        for(j = 1;j<=n;j++)
        {
            if(ch[i][j]=='X')continue;

            if(check(i,j))
            {
               // printf("%d %d boshaitasi\n",i,j);
                ch[i][j] = '1';
                coount();
                rook();
               // printf("chaira disi %d %d\n",i,j);
                ch[i][j] = '.';
            }
        }
    }

}
int main()
{
   // freopen("output.txt","w",stdout);
    int i,j;

    while(scanf("%d",&n)==1)
    {

        getchar();
         if(n==0)break;

        for(i = 1 ;i <=n ;i++)
        {
            for(j = 1;j<=n;j++)
            {
                scanf("%c",&ch[i][j]);
            }
            getchar();
        }

        x  = -1;
        rook();
        if(x==-1)
        {
            printf("0\n");
        }
        else
        {
             printf("%d\n",x);
        }


    }









return 0;
}
