#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,ara[30],a,i,mx,j;
    string s;

    scanf("%d",&t);
    getchar();

    for(i=0; i<=28; i++)
        ara[i] = 0;

    while(t--)
    {
        getline(cin,s);

        for(i=0; i<s.size(); i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
            {
                a = s[i]-'A'+1;
                ara[a]++;
            }
            else if(s[i]>='a'&&s[i]<='z')
            {
                a = s[i]-'a'+1;
                ara[a]++;
            }
        }
    }


    for(i=1; i<=26; i++)
    {
           mx = 0;
        for(j=1; j<=26; j++)
        {
            if(ara[j]!=0&&ara[j]>mx)
            {
                mx = ara[j];
                a = j;
            }
        }
        if(ara[a]!=0)
        {
            int b = a+'A'-1;
            printf("%c %d\n",b,mx);
            ara[a] = 0;
        }
    }












    return 0;
}
