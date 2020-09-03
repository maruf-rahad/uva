#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i,j,k,s,n,flag,flag2,x;
    char  ch[101][101];
    char str[16][20]= {"Happy","brithday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
    while(scanf("%d",&n)==1)
    {
        flag=0;
        flag2=0;
        for(i=0; i<n; i++)
        {
            scanf("%s",&ch[i]);
        }
        j=0;// man   flag2
        k=0;// song  flag
        while(1)
        {
            printf("%s: %s\n",ch[j],str[k]);
            if(k==15)
            {
                flag=1;
            }
            if(j==n-1)
            {
                flag2=1;
            }
            if(flag==1&&flag2==1&&k==15)
            {
                break;
            }
            j++;
            k++;
            if(j==n)
            {
                j=0;
            }
            if(k==16)
            {
                k=0;
            }
        }
    }
    return 0;
}
