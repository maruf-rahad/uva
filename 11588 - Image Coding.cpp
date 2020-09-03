#include<bits/stdc++.h>
using namespace std;
char ch[30][30];
int ara[30];
int main()
{
    char str;
    int t,n,m,a,b,i,j,x,y,k=0,sum;
    scanf("%d",&t);
    while(t--)
    {
        memset(ara,0,sizeof(ara));
        scanf("%d %d %d %d",&n,&m,&x,&y);
        getchar();
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                scanf("%c",&str);
                a = str-'A';
                ara[a]++;
            }
            getchar();
        }
        a = *max_element(ara,ara+28);
        sum = 0;
        for(i=0;i<26;i++)
        {
            if(ara[i]==a){
                sum+=(ara[i]*x);
            }
            else{
                sum+=(ara[i]*y);
            }
        }
        printf("Case %d: %d\n",++k,sum);
    }











return 0;
}
