#include<bits/stdc++.h>
using namespace std;
vector<pair<int, pair<int,int> > >v;
vector<int>v2;
int parent[2000];

void makeset(int n)
{
    for(int i = 0 ;i<=n+2;i++)
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
    //freopen("output.txt","w",stdout);
    int n,m,a,b,i,j,x,y,c;

    while(scanf("%d %d",&n,&m)==2)
    {
        if(n==0&&m==0)break;
        makeset(n);
        v.clear();
        v2.clear();

        for(i=1;i<=m;i++)
        {
            scanf("%d %d %d",&a,&b,&c);
            v.push_back({c,{a,b}});
        }
        sort(v.begin(),v.end());

        for(i=0;i<v.size();i++)
        {
            c = v[i].first;
            a = v[i].second.first;
            b = v[i].second.second;

            x = find_parent(a);
            y = find_parent(b);
            if(x!=y)
            {
                parent[y] = x;
            }
            else if(x==y)
            {
                v2.push_back(c);
            }
        }
        sort(v2.begin(),v2.end());

        if(!v2.size())
        {
            printf("forest\n");
        }
        else{
            printf("%d",v2[0]);
            for(i=1;i<v2.size();i++)
            {
                printf(" %d",v2[i]);
            }
            printf("\n");
        }




    }


















return 0;
}
