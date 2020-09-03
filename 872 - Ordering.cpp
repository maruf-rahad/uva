#include<bits/stdc++.h>
using namespace std;
map<char,int>power;
map<char,int>used;
map<char,int> :: iterator it;
map<char,vector<char> > mp;
map<char,vector<char> > :: iterator it2;
vector<char>v;
char ch[50];
int n,flag;

void khelaHobe(int att)
{
    int i,j;
    char ah,bh;
    if(att==n+1)
    {
        flag = 1;
        for(i=1;i<=n;i++)
        {
            printf("%c",ch[i]);
            if(i==n)printf("\n");
            else printf(" ");
        }
        return;
    }

    for(i=0;i<v.size();i++)
    {

        ah =  v[i];

        if(used[ah]==0&&power[ah]<=0)
        {
            used[ah] =  1;
            ch[att] = ah;

            for(j=0;j<mp[ah].size();j++)
            {
                bh = mp[ah][j];
                power[bh] = power[bh]-1;
            }
            khelaHobe(att+1);
            used[ah] = 0;
            for(j=0;j<mp[ah].size();j++)
            {
                bh = mp[ah][j];
                power[bh] = power[bh]+1;
            }





        }


    }
}


int main()
{
    int t,i,k=0;
    string s,x2;
    char ah,bh;
    scanf("%d",&t);
     getchar();
    while(t--)
    {

        getchar();
        flag = 0;
        used.clear();
        mp.clear();
        power.clear();
        v.clear();
        getline(cin,s);
        char x;

        stringstream ss(s);
        while(ss>>x)
        {
            power[x] = 0;
            used[x] = 0;
            mp[x];
            v.push_back(x);
        }
        getline(cin,s);
        stringstream ss2(s);


        sort(v.begin(),v.end());
        n = used.size();
        while(ss2>>x2)
        {
            ah = x2[0];
            bh = x2[2];
            mp[ah].push_back(bh);
            power[bh] = power[bh]+1;

        }
        ++k;

        if(k>1)
        {
            printf("\n");
        }

        khelaHobe(1);
        if(flag==0)
        {
            printf("NO\n");
        }










    }





























return 0;
}
