#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i,j,n;
    string s,str;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        str="+x";

        for(i=1; i<n; i++)
        {
            cin>>s;
            if(s=="No")
            {
                continue;
            }
            if(str=="+x")
            {
                if(s=="+z")
                {
                    str="+z";
                }
                else if(s=="-z")
                {
                    str="-z";
                }
                else if(s=="+y")
                {
                    str="+y";
                }
                else if(s=="-y")
                {
                    str="-y";

                }
            }
            else if(str=="-x")
            {
                if(s=="+z")
                {
                    str="-z";
                }
                else if(s=="-z")
                {
                    str="+z";
                }
                else if(s=="+y")
                {
                    str="-y";
                }
                else if(s=="-y")
                {
                    str="+y";

                }
            }
            else if(str=="+z")
            {
                if(s=="+y"||s=="-y")
                {
                    str="+z";
                }
                else if(s=="+z")
                {
                    str="-x";
                }
                else if(s=="-z")
                {
                    str="+x";
                }
            }
            else if(str=="-z")
            {
                if(s=="+y"||s=="-y")
                {
                    str="-z";
                }
                else if(s=="+z")
                {
                    str="+x";
                }
                else if(s=="-z")
                {
                    str="-x";
                }
            }
            else if(str=="+y")
            {
                if(s=="+z"||s=="-z")
                {
                    str="+y";
                }
                else if(s=="+y")
                {
                    str="-x";
                }
                else if(s=="-y")
                {
                    str="+x";
                }

            }
            else if(str=="-y")
            {
                if(s=="+z"||s=="-z")
                {
                    str="-y";
                }
                else if(s=="+y")
                {
                    str="+x";
                }
                else if(s=="-y")
                {
                    str="-x";
                }
            }

        }
        cout<<str<<endl;
    }




    return 0;
}
