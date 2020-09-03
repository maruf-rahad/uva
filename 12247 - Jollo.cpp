#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("output.txt","w",stdout);
    int ara[6];
    int a,b,i,j,x,y;
    while(scanf("%d %d %d %d %d",&ara[1],&ara[2],&ara[3],&ara[4],&ara[5])==5){
        if(ara[1]==0&&ara[2]==0&&ara[3]==0&&ara[4]==0&&ara[5]==0){
            break;
        }
        int flag2=0;
        sort(ara+1,ara+4);
        sort(ara+4,ara+6);
        if(ara[4]>ara[3]&&ara[5]>ara[3]){
                flag2=1;
                x=1;
            for(i=1;i<6;i++){
            for(j=1;j<6;j++){
                if(ara[j]==x){
                    x++;
                }
            }
        }
        printf("%d\n",x);
        }
        else if(ara[4]>ara[2]&&ara[5]>ara[2]){
            x=ara[2]+1;
            for(i=1;i<6;i++){
            for(j=1;j<6;j++){
                if(ara[j]==x){
                    x++;
                }
            }
        }
        if(x<=52){
            printf("%d\n",x);
            flag2=1;
        }
        }
        else if(ara[5]>ara[3]&&ara[4]<ara[3]){
                 int flag=0;
                 x=ara[3]+1;
        for(i=1;i<6;i++){
            for(j=1;j<6;j++){
                    if(ara[j]==x){
                        x++;
                    }

            }
        }
        if(x<=52){
                printf("%d\n",x);
            flag2=1;
        }

        }
        if(flag2==0){
            printf("-1\n");
        }



    }





return 0;
}
