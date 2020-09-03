#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;

void makeset(int a)
{
    if(mp.find(a)==mp.end())
    {
        mp[a] = a;
    }
}
int find_parent(int a)
{
    if(mp[a]==a)
    {
        return a;
    }

    mp[a] = find_parent(mp[a]);

    return mp[a];
}

int main()
{
    int n,m,a,b,x,y,sum;

    while(scanf("%d",&a)==1)
    {
        mp.clear();

        scanf("%d",&b);
        sum = 0;
        makeset(a);
        makeset(b);
        x = find_parent(a);
        y = find_parent(b);
        if(x!=y)
        {
            mp[y] = x;
        }
        else
        {
            sum++;
        }

        while(scanf("%d",&a)==1)
        {
            if(a==-1)
                break;
            scanf("%d",&b);

            makeset(a);
            makeset(b);
            x = find_parent(a);
            y = find_parent(b);
            if(x!=y)
            {
                mp[y] = x;
            }
            else
            {
                sum++;
            }
        }

        printf("%d\n",sum);

    }






































    return 0;
}
