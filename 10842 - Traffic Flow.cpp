#include<bits/stdc++.h>
using namespace std;
int parent[200];
vector<pair<int,pair<int,int> > >v;
void makeset(int n)
{
    for(int i=0;i<=n+2;i++)parent[i] = i;
}
int find_parent(int a)
{
    if(parent[a]==a)
        return a;

    parent[a] = find_parent(parent[a]);

    return parent[a];
}
int main()
{
    freopen("output.txt","w",stdout);
    int n,m,i,j=0,a,b,x,y,t,c,sum;
    scanf("%d",&t);
    while(t--)
    {
        v.clear();
        scanf("%d %d",&n,&m);
        makeset(n);
        for(i=1;i<=m;i++)
        {
            scanf("%d %d %d",&a,&b,&c);
            v.push_back(make_pair(c,make_pair(a,b)));
        }
        sort(v.begin(),v.end());
        sum = 999999999;
        for(i=v.size()-1;i>=0;i--)
        {
            c = v[i].first;
            a = v[i].second.first;
            b = v[i].second.second;

            x = find_parent(a);
            y = find_parent(b);
            if(x!=y)
            {
                parent[y] = x;

                    sum = c;

            }
        }

        printf("Case #%d: %d\n",++j,sum);



    }









































return 0;
}
