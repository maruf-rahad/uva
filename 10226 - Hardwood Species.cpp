#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","w",stdout);
    int n,i,j,x;
    double a,b,c,d;
    char str;
    char ch[100];
    string s;
    map < string , int > mp;
    map < string , int > :: iterator it;

    scanf("%d",&n);
    scanf("%c%c",&str,&str);

    for(i=1;i<=n;i++)
    {
        int x = 0;
    while(gets(ch))
    {
        s = string(ch);
        if(s.size()==0){
            break;
        }
        x++;
        if(mp.find(s)==mp.end())
        {
            mp[s] = 1;
        }
        else{
            mp[s]+=1;
        }
    }
    b = x;
    if(i>1){
        printf("\n");
    }

    for(it = mp.begin();it!=mp.end();it++)
    {
        a = it->second;
        c = (a/b)*100;
        cout<<it->first<<" ";
        printf("%0.4lf\n",c);
    }
    mp.clear();


    }
}
