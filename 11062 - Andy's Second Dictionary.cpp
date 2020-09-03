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
      s.clear();
       int flag = 0;
    while(gets(ch))
    {
        int l = strlen(ch);
        for(i=0;i<=l;i++)
        {

            if((ch[i]>='a'&&ch[i]<='z')||(ch[i]>='A'&&ch[i]<='Z'))
            {
                if(ch[i]>='A'&&ch[i]<='Z')ch[i] = ch[i]+32;
                s+=ch[i];
                flag = 1;
            }
            else if(ch[i]=='-')
            {
                if(i+1==l)
                {
                    i++;
                }
                else
                {
                    s+='-';
                }
            }
            else
            {

                if(flag==1)
                {
                   // cout<<s<<" "<<flag<<endl;
                    if(myset.find(s)==myset.end())
                    {
                        myset.insert(s);
                    }
                     flag = 0;
                    s.clear();
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
