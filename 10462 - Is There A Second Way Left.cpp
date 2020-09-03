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

void mst()
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
    int n,m,i,j = 0,a,b,c,t,second,sum;
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
        mst();
        if(!valid_check(n))
        {
            printf("Case #%d : No way\n",++j);
            continue;
        }
        second = 999999999;
        int flag = 0;
        for(i=0;i<v2.size();i++)
        {
            makeset(n);
            a = v2[i];
            sum = mst2(a);
            if(valid_check(n))
            {
                flag  = 1;
                if(sum<second)
                {
                    second = sum;
                }
            }
        }
        if(flag==0)
        {
            printf("Case #%d : No second way\n",++j);
        }
        else{
            printf("Case #%d : %d\n",++j,second);
        }
    }














return 0;
}
