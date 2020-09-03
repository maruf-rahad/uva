#include<bits/stdc++.h>
using namespace std;
int main()
{
  //  freopen("input.txt","w",stdout);
    int n,a,b,i,j,x,y,z,t,m,c,flag,k;

    scanf("%d",&m);

    while(m--)
    {

        scanf("%d %d %d",&a,&b,&c);
         flag = 0;

        for(i=-100; i<=100&&flag==0; i++)
        {
            for(j=-100; j<=100&&flag==0; j++)
            {
                for(k=-100; k<=100&&flag==0; k++)
                {
                    if((i+j+k)==a && (i*j*k)==b && (i*i+j*j+k*k)==c && i!=j&&j!=k&&i!=k)
                    {

                        printf("%d %d %d\n",i,j,k);
                        flag = 1;
                        break;
                    }
                }
            }
        }

        if(flag==0)
        {
            printf("No solution.\n");
        }

    }









    return 0;
}
