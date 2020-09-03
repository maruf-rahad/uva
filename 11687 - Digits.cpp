#include<bits/stdc++.h>
using namespace std;


int main()
{
   // freopen("output.txt","w",stdout);

    int n,m,a,b,i,j,sum,cnt,x;

    string s;

    while(cin>>s)
    {
        if(s=="END")
        {
            break;
        }
        sum = 0;
        cnt = 0;
        x = 1;
        for(i=0;i<s.size();i++)
        {
            sum+=s[i]-'0';
            cnt++;
        }
        if(sum==0)
        {
            printf("%d\n",2);
            continue;
        }
        else if(sum==1&&s[0]=='1'&&s.size()==1)
        {
            printf("1\n");
            continue;
        }

        a = 0;
        while(1)
        {
            int s = cnt;
            sum = cnt;
            cnt = 0;
            while(sum!=0)
            {
                sum/=10;
                cnt++;
            }

            x++;

          //  printf("%d %d\n",cnt,s);

            if(cnt==s)
            {
                break;
            }

            sum = cnt;
        }

        printf("%d\n",x);


    }









return 0;
}
