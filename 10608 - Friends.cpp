#include<bits/stdc++.h>
using namespace std;
int parent[30005];
int cnt[30005];
void makeset(int n)
{
    for(int i = 1 ; i<=n; i++)
    {
        parent[i] = i;
        cnt[i] = 1;
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
    int i,j,a,b,x,y,sum,flag,mx,n,m,t;


    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        makeset(n);
        for(i=1; i<=m; i++)
        {
            scanf("%d %d",&a,&b);

            x = find_parent(a);
            y = find_parent(b);

            if(x!=y)
            {
                parent[y] = x;
                cnt[x] = cnt[x]+cnt[y];
            }
        }
        mx = 0;
        for(i=1; i<=n; i++)
        {
            if(parent[i]==i)
            {
                if(cnt[i]>mx)
                {
                    mx = cnt[i];

                }
            }
        }

        printf("%d\n",mx);


    }











    return 0;
}
