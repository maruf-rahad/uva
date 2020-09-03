#include<bits/stdc++.h>
using namespace std;
char ch[2005];
int l;
int check(int n)
{
    int s = 0;

    for(int i=0;i<l;i++)
    {
        s = (s*10+(ch[i]-'0'))%n;
    }
    if(s%n==0)
        return 1;
    else
        return 0;


}
int main()
{
    int n,a,b,i,j,x,y,sum,t;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",&ch);
        l = strlen(ch);
        sum = 0;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {

            scanf("%d",&a);
            sum+=check(a);
        }
        if(sum==n)
        {
            printf("%s - Wonderful.\n",ch);
        }
        else{
            printf("%s - Simple.\n",ch);
            }
    }








return 0;
}
