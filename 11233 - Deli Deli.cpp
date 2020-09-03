#include<bits/stdc++.h>
using namespace std;
map<string,string>mp;


bool vcheck(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        return true;
    }
    return false;
}

void print(int n,string s)
{
    for(int i=0;i<n;i++)
    {
        cout<<s[i];
    }
}
int main()
{
  //  freopen("output.txt","w",stdout);
    string s,s2;
    int n,m,a,b,i,j,x,y,l;

    while(scanf("%d %d",&n,&m)==2)
    {
        mp.clear();
        for(i=1;i<=n;i++)
        {
            cin>>s>>s2;
            mp[s] = s2;
        }

        for(i=1;i<=m;i++)
        {
            cin>>s;
            if(mp.find(s)!=mp.end())
            {
                cout<<mp[s]<<endl;
            }
            else
            {
                l = s.size()-1;
                if(s[l]=='y'&&s.size()>=2&&!vcheck(s[l-1]))
                {
                    print(l,s);
                    printf("ies\n");
                }
                else if(s[l]=='o'||s[l]=='s'||s[l]=='x'||(s[l]=='h'&&s[l-1]=='c')||(s[l]=='h'&&s[l-1]=='s'))
                {
                    print(l+1,s);
                    printf("es\n");
                }
                else{
                    print(l+1,s);
                    printf("s\n");
                }

            }


        }
    }











return 0;
}
