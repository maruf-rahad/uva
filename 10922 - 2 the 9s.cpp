#include<bits/stdc++.h>
using namespace std;
string s;
void shinghi(int sum,int x)
{

    if(sum==9||sum%9!=0)
    {
        cout<<s;
        printf(" is a multiple of 9 and has 9-degree %d.\n",x);
        return;
    }

    int y = sum;
    sum = 0;
    while(y!=0)
    {
        sum = sum+y%10;
        y = y/10;
    }
    shinghi(sum,x+1);





}

int main()
{
    int i;

    while(cin>>s)
    {
        if(s=="0")
            break;


        int l = s.size();
        int sum = 0;
        for(i=0; i<l; i++)
        {
            sum = sum+s[i]-'0';
        }

        if(sum%9!=0)
        {
            cout<<s;
            printf(" is not a multiple of 9.\n");
        }
        else
        {
              shinghi(sum,1);
        }
    }







    return 0;
}
