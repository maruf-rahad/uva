#include<bits/stdc++.h>
using namespace std;


int main()
{
    string ch[120];
    //freopen("output.txt","w",stdout);
    int n,a,b,i,j,x,y,k;
    i = 0;
    int mx = 0;

    while(getline(cin,ch[i]))
    {
        a = ch[i].size();
        if(a>mx)
        {
            mx = a;
        }
        i++;
    }

    for(j=0; j<mx ; j++)
    {

        for(k=i-1; k>=0; k--)
        {
            if(j<ch[k].size())
            {
                cout<<ch[k][j];
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;

    }








    return 0;
}
