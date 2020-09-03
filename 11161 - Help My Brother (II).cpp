#include<bits/stdc++.h>
using namespace std;
vector<int>v[1555];
vector<int>mid;
int n = 1511;
void set_median()
{
    int a,b,i;
    mid.push_back(0);
    mid.push_back(1);
    int last = 1;
    for(i=2;i<=10;i++)
    {
        int now = last + i;
        a = now-last;

        printf("now=%d last=%d=%d\n",now,last,a);
        if(a%2==0)
        {
            mid.push_back(last+a/2);
        }
        else{
            mid.push_back(last+(a+1)/2);
        }

        last = now;

    }




}
void sett()
{
    for(int i=0;i<=1511;i++)v[i].clear();
    int a,b,i,j,x,y,sum;
    v[1].push_back(1);
    v[2].push_back(1);
    for(i=3;i<=n;i++)
    {
         //printf("\nfor %d\n",i);
        y = v[i-2].size();
        x = v[i-1].size();
     //   printf("size %d\n",x);
        sum = 0;
        for(j=0;j<x;j++)
        {
            if(j<y)
                a = v[i-2][j];
            else
                a = 0;
            sum = sum + v[i-1][j]+a;
         //   printf("sum %d\n",sum);
            a = sum%10;
           // printf("pushing %d\n",a);

            v[i].push_back(a);
            sum = sum/10;
          //  printf("baki %d\n",sum);
        }
     //   printf("sum = %d\n",sum);
        while(sum!=0)
        {
            v[i].push_back(sum%10);
            sum = sum/10;
        }

    }

}
int main()
{
    sett();
    set_median();
    int i,j,a,b;


        for(i=0;i<10;i++)
        {
            printf("%d %d \n",i,mid[i]);
        }
        printf("\n");










return 0;
}
