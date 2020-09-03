#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("output.txt","w",stdout);
    long long n,a,b,i,j,x,y,m,k;
    char ch;
    string s;
    vector<char>v;
    s.clear();
    v.clear();

    while(cin>>s)
    {
        v.clear();
        cin>>n>>m;
        long long sum = 0;
        j = 0;
        for(i=s.size()-1; i>=0; i--)
        {
            if(s[i]>='0'&&s[i]<='9')
            {
                a = s[i]-'0';
            }
            else if(s[i]>='A'&&s[i]<='F')
            {
                a = s[i]-'A'+1+9;
            }
            long long ss = 1;
            for(k = 1; k<=j; k++)
            {
                ss = ss*n;
            }
            j++;
            sum = sum+a*ss;

        }

        // printf("%lld %lld\n",sum,m);
        while(sum!=0)
        {
            a = sum%m;
            if(a>=0&&a<=9)
            {
                ch = a+'0';
            }
            else
            {
                ch = a+'A'-1-9;
            }
            v.push_back(ch);
            sum = sum/m;
        }
         int b = v.size();
        if(b==0){
            v.push_back('0');
            b = 1;
        }

        // printf("yes\n");
        if(b>7)
        {
            printf("  ERROR");
        }
        else
        {
            for(i=1;i<=7-b;i++)printf(" ");

            for(i=v.size()-1; i>=0; i--)
            {
                printf("%c",v[i]);
            }
        }
        cout<<endl;
        s.clear();
        v.clear();
    }







    return 0;
}
