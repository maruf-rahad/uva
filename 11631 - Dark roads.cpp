#include<bits/stdc++.h>
using namespace std;
int parent[2000];
vector<pair< int, pair<int,int> > >v;

void makeset(int n)
{
    for(int i = 0;i<n;i++)
    {
        parent[i] = i;
    }
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

    int n,m,i,j,x,y,a,b,c,sum;

    while(scanf("%d %d",&n,&m)==2)
    {
        if(n==0&&m==0)break;
        sum = 0;
        v.clear();
        makeset(n);

        for(i=1;i<=m;i++)
        {
            scanf("%d %d %d",&a,&b,&c);
             sum+=c;
            v.push_back(make_pair(c,make_pair(a,b)));
        }
        sort(v.begin(),v.end());
        int total = 0;
        for(i=0;i<m;i++)
        {
            a =  v[i].second.first;
            b =  v[i].second.second;

            x = find_parent(a);
            y = find_parent(b);
            if(x!=y)
            {
                total = total +v[i].first;
                parent[y] = x;

            }
        }

        printf("%d\n",sum-total);

    }








    return 0;
}
