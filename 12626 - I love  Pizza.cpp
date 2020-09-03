#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch[10000];
    int ara[30];
    vector<int>v;
    int n,m,a,b,i,j;

    scanf("%d",&n);

    for(j=0;j<n;j++)
    {
    scanf("%s",&ch);
    int length=strlen(ch);
    for(i=0;i<29;i++){
        ara[i] = 0;
    }
    for(i=0;i<length;i++)
    {
        a = ch[i]-64;
        ara[a]++;
    }
    v.clear();
    for(i=0;i<29;i++){

        if(i==1||i==7||i==9||i==13||i==20||i==18)
        {
            v.push_back(ara[i]);

        }
    }
    v[0] = v[0]/3;
    v[4] = v[4]/2;
    sort(v.begin(),v.end());
    printf("%d\n",v[0]);







    }


return 0;
}
