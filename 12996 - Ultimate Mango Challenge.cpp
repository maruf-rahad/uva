#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i,n,j,k,x,y,sum,flag;
    scanf("%d",&n);
    for(k=1;k<=n;k++)
    {
        scanf("%d %d",&a,&b);
        int ara[a];
        int ara2[a];
        sum=0;
        flag=0;
        for(i=0;i<a;i++)
        {
            scanf("%d",&ara[i]);
            sum=sum+ara[i];
        }
        for(i=0;i<a;i++)
        {
            scanf("%d",&ara2[i]);
        }
        if(sum>b)flag=1;
        for(i=0;i<a;i++)
        {
            if(ara[i]>ara2[i])
            {
                flag=1;
            }
        }
        if(flag==1){
            printf("Case %d: No\n",k);
        }else{
        printf("Case %d: Yes\n",k);
        }

    }


return 0;
}
