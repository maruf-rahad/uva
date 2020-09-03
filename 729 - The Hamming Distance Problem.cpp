#include<bits/stdc++.h>
using namespace std;
int n,k,x;
int number[100000];

map<string ,int>mp;
map<string,int> :: iterator it;

void permute(int att,int left)
{
    if(left>n-x)return;
    if(left>n-att+1)return;
    if(left==0)
    {
        string s;
        for(int i=n;i>=1;i--)
        {
            char ch  = number[i]+'0';

            s+=ch;
        }
        mp[s] = 1;


        return ;
    }

        if(left)
        {
            number[att] = 1;
            x++;
            permute(att+1,left-1);
            number[att] = 0;
            x--;
        }

        permute(att+1,left);



}
int main()
{
  // freopen("output.txt","w",stdout);
    int t,i,j,z=0;

    scanf("%d",&t);
    while(t--)
    {
        getchar();
        scanf("%d %d",&n,&k);
        for(i=0;i<=n+2;i++)
        {
            number[i] = 0;
        }

        if(z>0)printf("\n");
        z++;
        x = 0;
        mp.clear();
        permute(1,k);

        for(it = mp.begin();it!=mp.end();it++)
        {
            cout<<it->first<<endl;
        }
    }








return 0;
}
