#include<bits/stdc++.h>
using namespace std;
#define F first
#define S second
vector<pair<int,pair<int,int> > >v;
vector<int>v2;
vector<int>v3;
int mx,m;
int ara[20];

void backtrack(int x,int earn,int n)
{

    if(x==m)
    {
        mx = max(mx,earn);
        return ;

    }


    backtrack(x+1,earn,n);

        int xx,y,z;
        xx = v[x].F;
        y = v[x].S.F;
        z = v[x].S.S;

        for(int i=xx;i<y;i++)
        {
            if(ara[i]+z>n)
            {
                for(int j=xx;j<i;j++)
                {
                    ara[j]-=z;
                }
                return;
            }
            ara[i]+=z;
        }

    backtrack(x+1,earn+(y-xx)*z,n);
    for(int i=xx;i<y;i++)
    {
        ara[i]-=z;
    }


    return;

}
int main()
{
    // freopen("output.txt","w",stdout);
    int n,d,a,b,c,i;
    int visited[10];
    while(scanf("%d %d %d",&n,&d,&m)==3)
    {
        if(n==0&&d==0&&m==0)
            break;
       memset(ara,0,sizeof(ara));
        v.clear();

        for(i=1; i<=m; i++)
        {
            scanf("%d %d %d",&a,&b,&c);
            v.push_back({a,{b,c}});
        }
        mx = -9;
        sort(v.begin(),v.end());
        backtrack(0,0,n);

        if(mx==-9)
        {
            printf("0\n");
        }
        else
            printf("%d\n",mx);

    }





    return 0;
}
