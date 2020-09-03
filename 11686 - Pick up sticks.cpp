#include<bits/stdc++.h>
using namespace std;
int visit[100];
vector<int>v[10];
vector<int>vec;
void zero(int n)
{
    vec.clear();
    for(int i = 0;i<=n+5;i++)
    {
        visit[i] = 0;
        v[i].clear();
    }
}

void topsort(int n)
{
    int i,a,b;
    priority_queue<int>pq;

    for(int i = 1;i<=n;i++)
    {
        if(visit[i]==0)
        {
            vec.push_back(i);
            pq.push(-i);
        }
    }

    while(!pq.empty())
    {
        a = -pq.top();
        pq.pop();

        for(i=0;i<v[a].size();i++)
        {
            b = v[a][i];
            visit[b]--;
            if(visit[b]==0)
            {
                vec.push_back(b);
                pq.push(-b);
            }
        }

    }
}
int main()
{
    int n,m,a,b,i,j,x,y;

    while(scanf("%d %d",&n,&m)==2)
    {
        if(n==0&&m==0)break;
        zero(n);

        for(i=1;i<=m;i++)
        {
            scanf("%d %d",&a,&b);
            visit[b]++;
            v[a].push_back(b);
        }
        topsort(n);
        if(vec.size()==n)
        {

            for(i=0;i<n;i++)
            {
                printf("%d\n",vec[i]);
            }

        }
        else{
            printf("IMPOSSIBLE\n");
        }


    }

















return 0;
}
