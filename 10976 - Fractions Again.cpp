#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,m,k,x,y,z,sum;





    while(scanf("%d",&m)==1)
    {
        int sum = 0;

        for(i=m+1;i<=2*m;i++)
        {
            if((i*m)%(i-m)==0)
            {
                sum++;
            }
        }
        printf("%d\n",sum);
         for(i=m+1;i<=2*m;i++)
        {
            if((i*m)%(i-m)==0)
            {
                printf("1/%d = 1/%d + 1/%d\n",m,(i*m)/(i-m),i);
            }
        }




    }







    return 0;
}
