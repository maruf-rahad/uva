#include<bits/stdc++.h>
using namespace std;
vector<string>v;
vector<string>v2;
vector<string>str;
char num[12][9] = {"0","1","2","3","4","5","6","7","8","9"};
int sz;
string sss;

void backtrack(int sum,int n,int l)
{
    if(sum==l)
    {
        for(int i=0;i<l;i++)
        {
            cout<<v[i];
        }
        cout<<"\n";
        return ;
    }
    if(sss[sum]=='#')
    {
        for(int i=0;i<n;i++)
        {
            v.push_back(str[i]);
            backtrack(sum+1,n,l);
            v.pop_back();
        }
    }
    else if(sss[sum]=='0'){
        for(int i=0;i<=9;i++)
        {
            v.push_back(num[i]);
            backtrack(sum+1,n,l);
            v.pop_back();
        }
    }

}
int main()
{
    //freopen("output.txt","w",stdout);
    int n,m,a,b,i,j,x,y,l;
    string s;
    while(scanf("%d",&n)==1)
    {
        v.clear();
        v2.clear();
        str.clear();
        for(i=1;i<=n;i++)
        {
            cin>>s;
            str.push_back(s);
        }
        scanf("%d",&m);
        while(m--)
        {
            cin>>s;
            v2.push_back(s);
        }
        x = v2.size();
        printf("--\n");
        for(i=0;i<x;i++)
        {
            sss = v2[i];
            l = sss.size();
            backtrack(0,n,l);
        }
    }












return 0;
}
