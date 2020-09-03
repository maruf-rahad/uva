#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,a,b;
    int ara[14];
    j=1;
    scanf("%d",&n);
    while(n--)
    {
        int flag=0;
        for(i=1;i<=13;i++)
        {
            scanf("%d",&ara[i]);
            if(ara[i]==0)flag=1;
        }
        if(flag==0){
            printf("Set #%d: Yes\n",j);
        }else{
        printf("Set #%d: No\n",j);
        }
        j++;
    }

return 0;
}
