#include<bits/stdc++.h>
using namespace std;
int main()
{
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&m);
        double ara[m];
        for(j=0;j<m;j++){
            scanf("%lf",&ara[j]);
        }
        a=m;
        while(a>1){
                for(j=0;j<a-1;j++){
                    ara[j]=(ara[j]+ara[j+1])/2;
                }
                a--;
        }
        printf("Case #%d: %0.3lf\n",i,ara[0]);
    }

return 0;
}
