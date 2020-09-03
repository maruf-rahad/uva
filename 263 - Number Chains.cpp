#include<bits/stdc++.h>
using namespace std;
vector<int>v;
map<int,int>mp;
void separate(int x)
{
    v.clear();
    int n = x;
    while(x!=0)
    {
        int a = x%10;
        x = x/10;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
}
int one()
{
    int sum = 0;

    for(int i=0;i<v.size();i++)
    {
        sum = sum*10+v[i];
    }
    return sum;
}
int two()
{
    int sum = 0;
    for(int i = v.size()-1;i>=0;i--)
        sum = sum*10+v[i];

    return sum;
}
int main()
{
    int n,m,a,b,i,j,x,y;

    while(scanf("%d",&n)==1&&n!=0)
    {
        mp.clear();
        printf("Original number was %d\n",n);
        int sum = 0;

        while(1)
        {
            sum++;
            separate(n);
            a = one();
            b = two();

            printf("%d - %d = %d\n",b,a,b-a);
            mp[b-a]++;
            if(mp[b-a]==2)break;
            n = b-a;
        }
        printf("Chain length %d\n\n",sum);







    }











    return 0;
}
