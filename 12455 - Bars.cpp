#include<bits/stdc++.h>
using namespace std;
int ara[21];
int n,m,sum,flag;

void subset(int sum,int i)
{

    if(flag == 1)return;
   // printf("going : %d %d\n",i,sum);


    if(sum==m)
    {
        printf("YES\n");
        flag = 1;
        return ;
    }
    if(sum>m||i>n)return;

    subset(sum+ara[i++],i);

    subset(sum,i);


}
int main()
{
    int a,b,i,j,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&m);
        scanf("%d",&n);

        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
        }

      //  if(m==0)
        //{
         //   printf("444YES\n");
      //  }
      //  else{
        flag = 0;
        i =0;
        sum = 0;
        //printf("calling\n");

            subset(0,1);

          //  printf("come\n");

          //  printf("flag = %d\n",flag);


        if(flag==0)
        {
            printf("NO\n");
        }

       // }



    }












return 0;
}
