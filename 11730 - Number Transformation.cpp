#include<bits/stdc++.h>
using namespace std;
int ara[1111];
vector<int>v[1111];
map<int,int>cnt;
map<int,int>mp;
void sieve()
{
    int i,j;
    for(i=4;i<=1000;i+=2)
    {
        ara[i]  = 1;
    }
    for(i=3;i<=1000;i+=2)
    {
        if(ara[i]==0)
        {
            for(j=i*i;j<=1000;j+=2*i)
                ara[j] = 1;
        }
    }
}
void divisor_vortasi()
{
    int i,j;
    for(i=2;i<=1000;i++)
    {
        if(ara[i]==0)
        {
            for(j=i+i;j<=1000;j+=i)
            {
                v[j].push_back(i);
            }
        }
    }
}
bool bfs(int a,int b)
{
    queue<int>q;

    q.push(a);
    mp[a] = 1;
    cnt[a] = 0;

    while(!q.empty())
    {
        int x = q.front();
        if(x==b)return true;
        q.pop();
        for(int i=0;i<v[x].size();i++)
        {
           int y = x+v[x][i];
            if(mp.find(y)==mp.end()&&y<=b)
            {
                q.push(y);
                cnt[y] = cnt[x]+1;
                mp[y] = 1;
            }
        }
    }
    return false;


}
int main()
{
    sieve();
    divisor_vortasi();

    int i,j,a,b,x,y,k=0;
    bool flag;

    while(scanf("%d %d",&a,&b)==2)
    {
        mp.clear();
        cnt.clear();
        if(a==0&&b==0)break;

        flag = bfs(a,b);
        if(flag)
        {
            printf("Case %d: %d\n",++k,cnt[b]);
        }
        else{
            printf("Case %d: -1\n",++k);
        }
    }











return 0;
}
