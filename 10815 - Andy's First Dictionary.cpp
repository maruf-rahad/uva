#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("output.txt","w",stdout);
    int n,m,a,b,i,j,x,y;
    string s,s2;
    set<string>myset;
    set<string> :: iterator it;
    char ch[5500];

    while(gets(ch))
    {
        int l = strlen(ch);
        s.clear();
       int flag = 0;
        for(i=0;i<=l;i++)
        {

            if((ch[i]>='a'&&ch[i]<='z')||(ch[i]>='A'&&ch[i]<='Z'))
            {
                if(ch[i]>='A'&&ch[i]<='Z')ch[i] = ch[i]+32;
                s+=ch[i];
                flag = 1;
            }
            else
            {
                if(flag==1)
                {
                    if(myset.find(s)==myset.end())
                    {
                        myset.insert(s);
                    }
                    s.clear();
                    flag = 0;
                }
            }
        }

    }

    for(it = myset.begin();it!=myset.end();it++)
    {
        cout<<(*it)<<endl;
    }
















return 0;
}
