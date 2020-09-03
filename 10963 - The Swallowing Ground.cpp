#include<bits/stdc++.h>
using namespace std;
int ara[100000];
int main()
{
        int t,n,m,a,b,i,j,x,y,flag,k=0;
        scanf("%d",&t);
        while(t--)
        {

            scanf("%d",&n);
            for(i=1;i<=n;i++)
            {
                scanf("%d %d",&a,&b);

                ara[i] = abs(a-b);
            }
            a = ara[1];
            flag = 0;
            for(i=1;i<=n;i++)
            {
                if(a!=ara[i])
                {
                    flag = 1;
                    break;
                }
            }
            if(k>0)
            {
                printf("\n");
            }
            k++;
            if(flag==1)
            {
                printf("no\n");
            }
            else
            {
                printf("yes\n");
            }
        }












return 0;
}
