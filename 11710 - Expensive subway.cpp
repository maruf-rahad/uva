#include<bits/stdc++.h>
using namespace std;
map<string,string>mp;
map<string,string> :: iterator it;
vector<pair<int,pair<string,string> > > v;

void makeset(string s)
{
    mp[s] = s;
}

string find_parent(string a)
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


    string s,s2,s1,x,y;
    int n,m,a,b,i,j,c,sum;

    while(scanf("%d %d",&n,&m)==2)
    {
        if(n==0&&m==0)break;
        v.clear();
        mp.clear();
        for(i=1;i<=n;i++)
        {
            cin>>s;
            makeset(s);
        }
        for(i=1;i<=m;i++)
        {
            cin>>s1>>s2>>a;
            v.push_back(make_pair(a,make_pair(s1,s2)));

        }
        sort(v.begin(),v.end());
        sum = 0;
        for(i=0;i<v.size();i++)
        {
            c = v[i].first;
            s1 = v[i].second.first;
            s2 = v[i].second.second;

            x = find_parent(s1);
            y = find_parent(s2);
            if(x!=y)
            {
                mp[y] = x;
                sum+=c;
            }

        }
        cin>>s;
        int flag = 0;
        x = find_parent(s);
        for(it = mp.begin();it!=mp.end();it++)
        {
            s1 = it->first;
            y = find_parent(s1);

            if(x!=y)
            {
                flag = 1;
                break;
            }

        }

        if(flag==1)
        {
            printf("Impossible\n");
        }
        else{
            printf("%d\n",sum);
        }
    }









return 0;
}
