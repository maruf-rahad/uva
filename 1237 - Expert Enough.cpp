#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,j,x,y,z,flag,m,sum,t;
    char ch[10006][25];
    int l[10006];
    int r[10006];

    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&m);
        for(j=1; j<=m; j++)
        {
            scanf("%s %d %d",&ch[j],&l[j],&r[j]);
        }
        if(i>1)printf("\n");

        scanf("%d",&t);
        while(t--)
        {
            scanf("%d",&a);
            flag = 0;
            sum = 0;
            for(j=1; j<=m; j++)
            {
                if(l[j]<=a&&a<=r[j])
                {
                    sum++;
                    flag = 1;
                  // printf("yes %d\n",j);
                    b = j;
                }
                if(sum>=2)
                {
                    flag = 0;
                    break;
                }
            }
            if(flag==1)
            {
                printf("%s\n",ch[b]);
            }
            else
            {
                printf("UNDETERMINED\n");
            }

        }
    }







    return 0;
}
