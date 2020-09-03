#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("input.txt","w",stdout);
    char ch[10000];
    char str;
    string s,x;
    map< string , int >mp;

    long long n,a,b,i,j,m;
    scanf("%lld %lld%c",&n,&m,&str);
    for(i=1;i<=n;i++)
    {
        cin>>s>>a;
        mp[s] = a;

    }
    int sum = 0;
    int total = 0;
    while(gets(ch))
    {
        if(strcmp(ch,".")==0)
        {

            cout<<total<<endl;
            total = 0;
            sum++;
            if(sum == m){
                break;
            }
        }
        stringstream ss(ch);
        while(ss>>x)
        {
            if(mp.find(x)!=mp.end())
            {
                total+=mp[x];
            }
        }

    }

    return 0;
}
