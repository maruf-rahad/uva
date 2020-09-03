#include<bits/stdc++.h>
using namespace std;
vector<int>v;
vector<int>v2;
int main()
{
    char ch[500],str;
    string s;

    int n,a,b,i,j,c,d,x,k;
    scanf("%d%c",&n,&str);
    for(k=1;k<=n;k++)
    {
        v.clear();
        v2.clear();
        gets(ch);
        s = string(ch);
        stringstream ss (s);
        while(ss>>x)
        {
            v.push_back(x);
        }
        int total = 1;
        for(i=0;i<v.size()-1;i++)
        {
            for(j=i+1;j<v.size();j++)
            {
              c =   __gcd(v[i],v[j]);
              v2.push_back(c);

            }
        }
        d = *max_element(v2.begin(),v2.end());
        printf("%d\n",d);

    }






return 0;
}
