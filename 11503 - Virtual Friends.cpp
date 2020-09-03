#include<bits/stdc++.h>
using namespace std;
map<string,string>mp;
map<string,int>cnt;

void makeset(string a)
{
    if(mp.find(a)==mp.end())
    {
        mp[a] = a;
        cnt[a] = 1;
    }

}
string find_parent(string a)
{
    if(mp[a]==a)
    {
        return a;
    }
    mp[a] = find_parent(mp[a]);

    return mp[a];
}
int main()
{
    int t,n,i,j;
    string a,b,x,y;

    scanf("%d",&t);
    while(t--)
    {
         scanf("%d",&n);
        mp.clear();
        cnt.clear();

        for(i=1;i<=n;i++)
        {
            cin>>a>>b;
            makeset(a);
            makeset(b);

            x = find_parent(a);
            y = find_parent(b);
            if(x!=y)
            {
                mp[y] = x;
                cnt[x] = cnt[x]+cnt[y];
            }

            x = find_parent(a);

            printf("%d\n",cnt[x]);
        }
    }




return 0;
}
