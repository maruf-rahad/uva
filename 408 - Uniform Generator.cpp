#include<bits/stdc++.h>
using namespace std;
set<int>st;
int main()
{
   // freopen("output.txt","w",stdout);
    int n,m,a,b,i,j,x,y,sum;

    while(scanf("%d %d",&n,&m)==2)
    {
        st.clear();
        st.insert(0);
        sum = 1;
        x = 0;

        while(1)
        {
            x = (x+n)%m;
            if(st.find(x)==st.end())
            {
                st.insert(x);
                sum++;
            }
            else break;
        }

        if(sum==m)
        {
            printf("%10d%10d    Good Choice\n\n",n,m);
        }
        else{
            printf("%10d%10d    Bad Choice\n\n",n,m);
        }


    }










    return 0;
}
