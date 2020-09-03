#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>v;
vector<ll>hexa1;
vector<ll>hexa2;

ll power(ll b)
{
    ll sum = 1;
    for(ll i=1; i<=b; i++)
    {
        sum = sum*16;
    }
    return sum;
}
int main()
{
    //freopen("output.txt","w",stdout);
    ll n,m,a,b,j,t,tot1,tot2,x,y;
    string s,s2;
    char str,str2;
    int i;

    scanf("%lld",&t);
    while(t--)
    {
        cin>>s;
        scanf("%c%c%c",&str2,&str,&str2);
        cin>>s2;
        v.clear();
        hexa1.clear();
        hexa2.clear();

        for(i=s.size()-1; i>=0; i--)
        {
            if(s[i]>='A'&&s[i]<='Z')
            {
                a = s[i]-'A'+10;
            }
            else
            {
                a = s[i]-'0';
            }
            v.push_back(a);
        }
        tot1 = 0;
        tot2 = 0;

        for(i=0; i<v.size(); i++)
        {
            tot1+= v[i]*power(i);
        }

        v.clear();



        for(i=s2.size()-1; i>=0; i--)
        {

            if(s2[i]>='A'&&s2[i]<='Z')
            {
                a = s2[i]-'A'+10;
            }
            else
            {
                a = s2[i]-'0';
            }

            v.push_back(a);
        }



        for(i=0; i<v.size(); i++)
        {

            tot2+= v[i]*power(i);
        }

        x = tot1;
        y = tot2;


        while(tot1!=0)
        {
            a = tot1%2;
            tot1 = tot1/2;
            hexa1.push_back(a);
        }
        while(tot2!=0)
        {
            a = tot2%2;
            tot2/=2;
            hexa2.push_back(a);
        }

        for(i=1;i<=13-hexa1.size();i++)
        {
            printf("0");
        }

        for(i=hexa1.size()-1;i>=0;i--)printf("%lld",hexa1[i]);

        if(str=='+')printf(" + ");
        else printf(" - ");

        for(i=1;i<=13-hexa2.size();i++)
        {
            printf("0");
        }
        for(i=hexa2.size()-1;i>=0;i--)printf("%lld",hexa2[i]);

        printf(" = ");

        if(str=='+')
                printf("%lld\n",x+y);
        else
            printf("%lld\n",x-y);








    }












    return 0;
}
