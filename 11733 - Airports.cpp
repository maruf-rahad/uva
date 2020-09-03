#include<bits/stdc++.h>
using namespace std;
vector<pair<int,pair<int,int> > >v;
int parent[11000];

void makeset(int n)
{
    for(int i=1;i<=n+2;i++)
        parent[i] = i;
}
int find_parent(int a)
{
    if(parent[a]==a)
    {
        return a;
    }
    parent[a] = find_parent(parent[a]);

    return parent[a];
}
int main()
{

    int n,m,a,b,i,j = 0,x,y,c,sum,air,t;

    scanf("%d",&t);
    while(t--)
    {
        v.clear();
        scanf("%d %d %d",&n,&m,&air);
        makeset(n);
        for(i=1;i<=m;i++)
        {
            scanf("%d %d %d",&a,&b,&c);

            v.push_back(make_pair(c,make_pair(a,b)));
        }
        sort(v.begin(),v.end());
        int sum = 0,z = 0;
        for(i=0;i<v.size();i++)
        {
            c = v[i].first;
            if(c>=air)
            {
                continue;
            }
            a = v[i].second.first;
            b = v[i].second.second;

                x = find_parent(a);
                y = find_parent(b);
                if(x!=y)
                {
                    parent[y] = x;
                    sum+=c;
                }

        }
        for(i=1;i<=n;i++)
        {
            if(find_parent(i)==i)
            {
                sum+=air;
                z++;
            }
        }
        printf("Case #%d: %d %d\n",++j,sum,z);







    }









































return 0;
}
