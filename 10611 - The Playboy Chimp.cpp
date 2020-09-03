#include<bits/stdc++.h>
using namespace std;
int ara[100];
int n;
void lowerbound(int key,int b,int e)
{
    int index = 0;
    while(b<=e)
    {
        int mid = (b+e)/2;
       // printf("b = %d e = %d mid %d am %d\n",b,e,mid,ara[mid]);
        if(key==ara[mid])
        {
            index = mid;
            e = mid-1;
        }
        else if(key<ara[mid])
        {
            e = mid-1;
        }
        else if(key>ara[mid])
        {
            b = mid+1;
        }
    }

    if(index==0&&(b-1)<1)
    {
        printf("X ");
    }
    else if(index==0)
    {
         printf("%d ",ara[b-1]);
    }
    else{
            if(index==1)
                printf("X ");

            else
                printf("%d ",ara[index-1]);
    }

}

void upperbound(int key,int b,int e)
{
    int index = 0;

    while(b<=e)
    {
        int mid = (b+e)/2;
        //  printf("%d %d %d %d\n",b,e,mid,ara[mid]);
        if(key==ara[mid])
        {
            index = mid;
            b = mid+1;
        }
        else if(key>ara[mid])
        {
            b = mid+1;
        }
        else if(key<ara[mid])
        {
            e = mid-1;
        }
    }
    if((index==0&&b>n)||index==n)
    {
        printf("X\n");
    }
    else
    {
        printf("%d\n",ara[b]);
    }
}
int main()
{
    int m,a,b,u,j,i;

    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&ara[i]);
    }
    scanf("%d",&m);
    while(m--)
    {
        scanf("%d",&a);

        lowerbound(a,1,n);
        upperbound(a,1,n);



    }











return 0;
}
