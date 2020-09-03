
#include<bits/stdc++.h>
using namespace std;
vector<pair<int,pair<int,int> > >v;
int parent[1000005];

void makeset(int n)
{
    for(int i=1; i<=n+2; i++)
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
    int n,a,b,c,i,j,x,y,m,sum,total,k=0;

    while(scanf("%d",&n)==1)
    {
        makeset(n);
        v.clear();
        sum = 0;
        total = 0;
        for(i=1; i<n; i++)
        {
            scanf("%d %d %d",&a,&b,&c);
            v.push_back(make_pair(c,make_pair(a,b)));
            sum+=c;
        }
        scanf("%d",&m);
        for(i=1; i<=m; i++)
        {
            scanf("%d %d %d",&a,&b,&c);
            v.push_back(make_pair(c,make_pair(a,b)));
        }
        sort(v.begin(),v.end());

        n = v.size();
        for(i=0;i<n;i++)
        {
            a = v[i].second.first;
            b = v[i].second.second;
            c = v[i].first;

            x = find_parent(a);
            y = find_parent(b);
            if(x!=y)
            {
                parent[y] = x;
                total+=c;
            }
        }

        scanf("%d",&m);
        for(i=1;i<=m;i++)
        {
            scanf("%d %d %d",&a,&b,&c);
        }
        k++;
        if(k>1)printf("\n");
        printf("%d\n",sum);

        printf("%d\n",total);






    }










    return 0;
}
