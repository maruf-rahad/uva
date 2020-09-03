#include<bits/stdc++.h>
using namespace std;
int parent[120];
vector<int>v2;
vector<pair<int,pair<int,int> > >v;
void makeset(int n)
{
    for(int i=0;i<=n+2;i++)parent[i] = i;
}

int find_parent(int a)
{
    if(parent[a]==a)return a;

    parent[a] = find_parent(parent[a]);

    return parent[a];
}
bool valid_check(int n)
{
    int sum = 0;

    for(int i=1;i<=n;i++)
    {
        if(find_parent(i)==i)sum++;
    }
    if(sum>1)return false;

    return true;
}
int mst()
{
    int a,b,c,x,y,sum=0;
    int l = v.size();

    for(int i=0;i<l;i++)
    {
        c = v[i].first;
        a = v[i].second.first;
        b = v[i].second.second;

        x = find_parent(a);
        y = find_parent(b);
        if(x!=y)
        {
            parent[y] = x;
            sum+=c;
            v2.push_back(i);
        }

    }

    return sum;
}

int mst2(int zz)
{
    int a,b,c,x,y,sum=0;
    int l = v.size();
    for(int i=0;i<l;i++)
    {
        if(i==zz)continue;
        c = v[i].first;
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

    return sum;
}

int main()
{
    //freopen("output.txt","w",stdout);
    int t,a,b,i,j,x,y,n,m,first,second,sum,total,l,c;

    scanf("%d",&t);
    while(t--)
    {
        v.clear();
        v2.clear();
        scanf("%d %d",&n,&m);
        makeset(n);
        for(i=1;i<=m;i++)
        {
            scanf("%d %d %d",&a,&b,&c);
            v.push_back({c,{a,b}});
        }
        sort(v.begin(),v.end());
        first = mst();
        printf("%d ",first);
        second = 999999999;

        for(i=0;i<v2.size();i++)
        {
            makeset(n);
            a =  v2[i];
            sum = mst2(a);
           if(valid_check(n))
            {

                if(sum<second)
                {
                    second = sum;
                }
            }
        }
        if(m==n-1)
        {
            printf("%d\n",first);
        }
        else{
            printf("%d\n",second);
        }

    }









































return 0;
}
