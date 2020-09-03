#include<bits/stdc++.h>
using namespace std;
vector<int>l;
vector<int>h;
vector<int>r;
int main()
{
    int n,a,b,i,j,x,y,k,m,c,flag;
    l.clear();
    h.clear();
    r.clear();

    while(scanf("%d %d %d",&a,&b,&c)==3)
    {
        l.push_back(a);
        h.push_back(b);
        r.push_back(c);
    }

    a = 0;
    printf("%d %d",l[0],h[0]);


        flag = 0;

        for(i=a+1;i<l.size();i++)
        {
            if(l[i]<r[a]&&h[i]>h[a]&&i!=a)
            {
                printf(" %d %d",l[i],h[i]);
                a = i;
                flag = 1;
            }
        }









return 0;
}
