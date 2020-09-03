#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j,k,l,m,n,o,p,x;
    x=1;
    while(scanf("%d",&n)==1){
        if(n==0)break;
        int ara[n];
        for(i=0;i<n;i++){
            scanf("%d",&ara[i]);
        }
        sort(ara,ara+n);
        if(x>1)printf("\n");
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                for(k=j+1;k<n;k++){
                    for(l=k+1;l<n;l++){
                        for(m=l+1;m<n;m++){
                            for(o=m+1;o<n;o++){
                                printf("%d %d %d %d %d %d\n",ara[i],ara[j],ara[k],ara[l],ara[m],ara[o]);
                            }
                        }
                    }
                }
            }
        }
        x++;
    }

    return 0;
}
