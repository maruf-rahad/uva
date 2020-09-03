#include<bits/stdc++.h>
using namespace std;
const int MAX = 100;
typedef pair<int ,int>p;
int main()
{
    char ch[10000];
    vector<p>v[MAX];
    int n,m,a,b,i,j;
    for(i=0;i<28;i++)
    {
        v[i].clear();
        v[i].first = 0;
    }
    for(i=0;i<27;i++){
        for(i=0;i<v[i].size();i++)
        {
            printf("%d\n",v[i].first);
        }
    }
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&ch);
    }
    int length=strlen(ch);
    for(i=0;i<length;i++)
    {
        a = ch[i]-96;
    }









return 0;
}
