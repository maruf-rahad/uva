#include<bits/stdc++.h>
using namespace std;
int a[10];
int used[10],flag;

void make(int sum,int att)
{
    if(att>5||flag == 1)return;

    if(att==5&&sum==23)
    {
        flag = 1;
        return;
    }

    for(int i=1;i<=5;i++)
    {
        if(used[i]==0)
        {
            used[i] = 1;
            make(sum+a[i],att+1);
            make(sum-a[i],att+1);
            make(sum*a[i],att+1);
            used[i] = 0;
        }
    }
}

int main()
{
    //freopen("output.txt","w",stdout);

    int sum,i;

    while(scanf("%d %d %d %d %d",&a[1],&a[2],&a[3],&a[4],&a[5])==5)
    {
        if(a[1]==0&&a[2]==0&&a[3]==0&&a[4]==0&&a[5]==0)
            break;

        for(i=0; i<=8; i++)
            used[i] = 0;

            flag = 0;
            sum = 0;

        for(i=1; i<=5; i++)
        {
            if(used[i]==0)
            {
                sum = a[i];
                used[i] = 1;
                make(sum,1);
                used[i] = 0;
            }
        }

        if(flag==1)
        {
            printf("Possible\n");
        }
        else{
            printf("Impossible\n");
        }



    }












    return 0;

}
