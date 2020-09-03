#include<bits/stdc++.h>
using namespace std;
int ara[4];
vector<int>v;
vector<int>qvec;
vector<int>stkvec;
vector<int>pqvec;
stack<int>stk;
queue<int>q;
priority_queue<int>pq;
void dj()
{
    for(int i=0; i<4; i++)
    {
        ara[i] = 0;
    }
    v.clear();
    qvec.clear();
    stkvec.clear();
    pqvec.clear();
    while(!q.empty())q.pop();
    while(!stk.empty())stk.pop();
    while(!pq.empty())pq.pop();
}

int main()
{
  // freopen("input.txt","w",stdout);

    int n,a,b,i,j,sum,x,y,z,flag3,p,flag;

    while(scanf("%d",&n)==1)
    {

        dj();
        y = 0;
        z = 0;
        int flag3=0;
        for(i=1; i<=n; i++)
        {
            scanf("%d %d",&a,&b);

            if(flag3==0)
            {

                if(a==1)
                {
                    y++;
                    q.push(b);
                    pq.push(b);
                    stk.push(b);
                }
                if(a==2)
                {
                    flag = 0;

                    z++;
                    if(z>y)
                    {
                        flag3=1;
                      //  printf("flag %d\n",flag3);
                        continue;
                    }

                    x = b;
                    v.push_back(b);

                    p = q.front();

                    if(p==x)
                    {

                        ara[1]++;
                        flag = 1;
                        q.pop();

                    }
                    p = pq.top();
                    if(p==x)
                    {
                        ara[3]++;
                        flag = 1;
                        pq.pop();
                    }
                    p = stk.top();
                    if(x==p)
                    {
                        ara[2]++;
                        flag = 1;
                        stk.pop();
                    }
                    if(flag==0)
                    {
                        flag3=1;

                    }

                }

            }


        }
      // printf("%d\n",z);



        if(flag3==1||(ara[1]!=z&&ara[2]!=z&&ara[3]!=z))
        {
            printf("impossible\n");
        }
        else
        {

            sum = 0;
            for(i=1; i<4; i++)
            {
                if(ara[i]==z)
                {
                    sum++;
                    b = i;
                }
            }
            if(sum==0)
            {
            printf("not sure\n");
            }
            else if(sum>1)
            {
                printf("not sure\n");
            }
            else if(b==1)
            {
                printf("queue\n");
            }
            else if(b==2)
            {
                printf("stack\n");
            }
            else if(b==3)
            {
                printf("priority queue\n");
            }


        }






    }








    return 0;
}
