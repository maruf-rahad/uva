#include<bits/stdc++.h>
using namespace std;
long long node;
long long casee;
queue<long long>q;
map<long long,long long>visited;
map<long long,long long>level;
map<long long,vector<long long> >mp;
map<long long ,long long> :: iterator  it1;
map<long long ,vector<long long> > :: iterator  it;
void zero1()
{
    for(it = mp.begin();it!=mp.end();it++)
    {
      long long    a = it->first;
        mp[a].clear();
    }
    mp.clear();
}
void zero2()
{
    long long a;
    visited.clear();
    level.clear();
    for(it = mp.begin();it!=mp.end();it++)
    {
        a = it->first;
        visited[a] = 0;
        level[a] = 0;

    }


    while(!q.empty())
    {
        q.pop();
    }
}
long long nodee()
{
        node = 0;

        for(it = mp.begin();it!=mp.end();it++)
        {
            node++;
        }
        return node;
}

void dj(long long b,long long a,long long node)
{

    long long  sum = 0;
    for(it1 = level.begin();it1!=level.end();it1++)
    {
       // printf("%d %d\n",it->first,it1->second);
       long long  z = it1->first;
    //   printf("%d  %d\n",z,level[z]);
        if(level[z]<=b&&level[z]!=0)
        {
            sum++;
        }
    }
    if(level.find(a)!=level.end())
    {
        sum++;
    }



     //   printf("%d %d\n",i,level[i]);

 //   printf("node = %d %d\n",node,sum);

    printf("Case %lld: %lld nodes not reachable from node %lld with TTL = %lld.\n",casee,node-sum,a,b);
}
void bfs(long long a)
{
     node = 0;
    q.push(a);
    if(level.find(a)!=level.end())
    {
    level[a] = 0;
    visited[a]=1;

    while(!q.empty())
    {
        a = q.front();
      //  printf("pop : %d\n",a);
        q.pop();

        for(long long i=0; i<mp[a].size(); i++)
        {
            long long x = mp[a][i];
           // printf("x = %d  visited = %d\n",x,visited[x]);
            if(visited[x]==0)
            {
                level[x] = level[a]+1;
                visited[x] = 1;
             //  printf("push = %d\n",x);
                q.push(x);
            }
        }
    }

    }
}
int main()
{
   // freopen("input.txt","w",stdout);
    long long n,i,j,a,b,u,x,y;

    while(scanf("%lld",&n)==1&&n>0)
    {
        zero1();


        for(i=1; i<=n; i++)
        {
            scanf("%lld %lld",&a,&b);
            mp[a].push_back(b);
            mp[b].push_back(a);
        }

        while(scanf("%lld %lld",&a,&b)==2)
        {
            if(a==0&&b==0)break;



            zero2();
            casee++;
            long long x =  nodee();
            if(level.find(a)==level.end())
            {
                 printf("Case %lld: %lld nodes not reachable from node %lld with TTL = %lld.\n",casee,node,a,b);
                 continue;
            }

            bfs(a);
            dj(b,a,x);



        }

    }

    return 0;
}
