#include<bits/stdc++.h>
using namespace std;
int x,mx,n,flag;
int visited[55];
vector<int>v[55];

void zero(int n)
{
    for(int i= 0; i<=n+1; i++)
    {
        v[i].clear();
    }
}

void hanoi(int att,int in)
{
    if(in>n||flag==1)
    {
        flag = 1;
            return;
    }

    if(att>mx)mx = att;

    if(v[in].size()==0)
    {
        v[in].push_back(att);
        hanoi(att+1,in);

    }
    else
    {
        for(int i=1; i<=in; i++)
        {
            int a = v[i].back();
            int b = a+att;
            int c = sqrt(a+att);
            if(c*c==b)
            {
                v[i].push_back(att);

                hanoi(att+1,in);
                // v[i].pop_back();
            }
        }
        hanoi(att,in+1);
    }


}

int main()
{
    int m,i,j,y,t;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        x = 0;
        mx = 0;
        flag = 0;
        zero(n);
        hanoi(1,1);

        printf("%d\n",mx-1);
        /* for(i=1;i<=n;i++)
         {
             printf("%d : ",i);
             for(j=0;j<v[i].size();j++)
             {
                 printf(" %d",v[i][j]);
             }
             printf("\n");
         }*/



    }

    return 0;
}
