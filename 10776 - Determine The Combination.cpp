#include<bits/stdc++.h>
using namespace std;
int used[20],n,m;
char ch[100],s[100];

void combination(int att,int left)
{
    int i;
   // printf("%d %d\n",att,left);
    if(left>n-att+1)
    {
      //  printf("yes\n");
        return;
    }
    if(left==0)
    {
        for(i=1;i<=m;i++)
        {
            printf("%c",ch[i]);

        }
        printf("\n");
        return;
    }



    if(left>0)
    {
        ch[m-left+1] = s[att];
        combination(att+1,left-1);
        while(att<n&&s[att]==s[att+1])att++;
    }
    combination(att+1,left);


}



int main()
{
    int i;
    int ara[100];
    while(scanf("%s %d",&s,&m)==2)
    {
        n = strlen(s)-1;

        sort(s,s+n+1);

        combination(0,m);


    }











return 0;
}
