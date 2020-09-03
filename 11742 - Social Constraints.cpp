#include<bits/stdc++.h>
using namespace std;
int ara[30];
int ara2[30];
int ara3[30];
int dj[8] = {0,1,2,3,4,5,6,7};
int n,cnt,j,m,p1,p2;
int nmbr(int a)
{

    for(int i = 0;i<n;i++)
    {
        if(dj[i]==a)
        {
        //printf("return %d\n",i);
        return i;
        }
    }
}
void first()
{
     int sum = 0,i;

           //  printf("iteration = %d: \n",++j);



           // printf("%d %d %d\n",dj[0],dj[1],dj[2]);
            for(i=0;i<m;i++)
            {

                p1 = nmbr(ara[i]);
                p2 = nmbr(ara2[i]);
                //printf("p1 = %d p2 = %d\n",p1,p2);

                if(ara3[i]>0&&abs(p1-p2)<=abs(ara3[i]))
                {
                    sum++;

                }
                else if(ara3[i]<0&&abs(p1-p2)>=abs(ara3[i]))
                {
               //     printf("%d %d %d\n",ara3[i],p1,p2);
                    sum++;
                }

            }

            if(sum==m)
            {
                cnt++;
            }

            //printf(" %d %d cnt = %d\n",sum,m,cnt);

}
int main()
{
   // freopen("input.txt","w",stdout);
    int a,b,i,p1,p2;

    while(scanf("%d %d",&n,&m)==2&&(n>0||m>0))
    {
        for(i=0;i<m;i++)
        {
            scanf("%d %d %d",&ara[i],&ara2[i],&ara3[i]);
        }
        cnt = 0;
        j = 0;
        first();

        while(next_permutation(dj,dj+n))
        {

             int sum = 0;

           //  printf("iteration = %d: \n",++j);

          //  printf("%d %d %d\n",dj[0],dj[1],dj[2]);
            for(i=0;i<m;i++)
            {

                p1 = nmbr(ara[i]);
                p2 = nmbr(ara2[i]);
                //printf("p1 = %d p2 = %d\n",p1,p2);

                if(ara3[i]>0&&abs(p1-p2)<=abs(ara3[i]))
                {
                    sum++;

                }
                else if(ara3[i]<0&&abs(p1-p2)>=abs(ara3[i]))
                {
                 //   printf("%d %d %d\n",ara3[i],p1,p2);
                    sum++;
                }

            }
            if(sum==m)
            {
                cnt++;
               // printf("cnt = %d\n",cnt);
            }



        }
        printf("%d\n",cnt);
    }











return 0;
}
