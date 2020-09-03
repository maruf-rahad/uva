#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("output.txt","w",stdout);
    int n,i,j,a,b,flag,sum;
    char ch[10000];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",&ch);
        b = strlen(ch);
        a = 0;
        sum = 0;
        for(j=0;j<b;j++){
            if(ch[j]=='O')
            {
                a++;
                sum+=a;
            }
            else{

                a=0;
            }
        }
        //sum+=a;
        printf("%d\n",sum);
    }











return 0;
}
