#include<bits/stdc++.h>
using namespace std;
vector<pair<double, pair<double,double> > >v;

vector<pair<double, pair<double,double> > >v1;

int parent[100000];
void makeset(int  n)
{
    for(int i=0;i<=n+2;i++)

    {
        parent[i] = i;
    }
}

int find_parent(int a)
{
    if(parent[a] == a)
    {
        return a;
    }

    parent[a] = find_parent(parent[a]);
    return parent[a];


}
int main()
{
    int t,n,i,j,k = 0,nmbr1,nmbr2,x,y;
    double a,b,a1,a2,b1,b2,d,sum,c;

    scanf("%d",&t);

    while(t--)
    {
        v.clear();
        v1.clear();


        scanf("%d",&n);
        makeset(n);
        for(i=1;i<=n;i++)
        {
            scanf("%lf %lf",&a,&b);
            v1.push_back({i,{a,b}});

        }

        for(i=0;i<v1.size();i++)
        {
            for(j=0;j<v1.size();j++)
            {
                if(i<j)
                {

                    nmbr1 = v1[i].first;
                    nmbr2 = v1[j].first;
                    a1 = v1[i].second.first;
                    a2 = v1[i].second.second;
                    b1 = v1[j].second.first;
                    b2 = v1[j].second.second;
                    d = sqrt((a1-b1)*(a1-b1)+(a2-b2)*(a2-b2));
                    v.push_back({d,{nmbr1,nmbr2}});

                }
            }
        }

        sort(v.begin(),v.end());
        sum = 0;
        for(i=0;i<v.size();i++)
        {
            d = v[i].first;
            nmbr1 = v[i].second.first;
            nmbr2 = v[i].second.second;

            x = find_parent(nmbr1);
            y = find_parent(nmbr2);
            if(x!=y)
            {
                parent[y] = x;
                sum+=d;
            }
        }

        k++;
        if(k>1)printf("\n");
        printf("%0.2f\n",sum);


    }


























return 0;
}
