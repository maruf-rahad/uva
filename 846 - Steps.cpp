#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,a,b,n,i,j,sum;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d",&a,&b);
        j=1;
        sum=0;
        x=a;
        while(1){
                x=a+j;
                b=b-j;
            sum=sum+1;
            j++;
            if(x>=b)break;

        }
        printf("%d\n",sum);
    }


return 0;
}
