#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;
    ll h,m,ss,m2,ss2,c2,c,sum,h2;

    while(cin>>s)
    {
        sum = 0;
        h = (s[0]-'0')*10+s[1]-'0';
        m = (s[2]-'0')*10+s[3]-'0';
        ss = (s[4]-'0')*10+s[5]-'0';
        c = (s[6]-'0')*10+s[7]-'0';

        sum = c+ss*100+m*60*100+h*60*60*100;
        h2 = (sum*10000000)/8640000;

        sum = 0;
        h = h2;
        do{
            sum++;
            h/=10;
        }while(h!=0);

        for(int i=1;i<=7-sum;i++)printf("0");

        printf("%lld\n",h2);







    }












return 0;
}
