#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,d,i,j,sum;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d %d",&a,&b,&c);
        sum=0;
        j=1;
        while(j<=b)
        {
            sum=sum+c;
            c++;
            j++;
        }
        int total=0;
        j=1;
        while(j<=a){
                total=total+j;
            j++;
        }
        total=total-sum;
        printf("Case %d: %d\n",i,total);
    }



return 0;
}
