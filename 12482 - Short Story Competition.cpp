#include<bits/stdc++.h>
using namespace std;
int main()
{

    char ch[1000];
    vector< int >v;
    int n,a,b,l,c,i,j,length,x,y,sum;
    while(scanf("%d %d %d",&n,&l,&c)==3)
    {
        v.clear();
        for(i=1;i<=n;i++)
        {
            scanf("%s",&ch);
             length = strlen(ch);
             v.push_back(length);
        }
        sum = 0;
        x = 0;
        y = 0;
        int flag = 0;
        for(i=0;i<v.size();i++)
        {
            sum+=v[i]+1;
            //printf("%d ",sum);
            if(sum==c||(sum-1)==c)
            {
                x++;
                sum = 0;
            }
            else if((sum-1)>c)
            {
                x++;
                i--;
                sum = 0;
            }
            if(x==l)
            {
                y++;
                x = 0;
                sum = 0;
            }

        }
        if(x!=0||sum!=0)
        {
            y++;
        }
        printf("%d\n",y);

    }

return 0;
}
