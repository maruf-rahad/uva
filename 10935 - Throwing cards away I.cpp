#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,a,b,i,j;
    while(scanf("%d",&n)==1 && n!=0)
    {
        queue< int >Q;

        for(i=1;i<=n;i++)
        {
            Q.push(i);
        }
        printf("Discarded cards:");
        int flag = 0;
        while(1)
        {
            if(Q.size()>1)
            {
            if(flag == 0)
            {
                cout<<" "<<Q.front();
                flag = 1;
            }
            else{
                cout<<", "<<Q.front();
            }

            Q.pop();


            a = Q.front();
            Q.push(a);
            Q.pop();

            }
            if(Q.size()==1)
            {
                printf("\nRemaining card: %d\n",Q.front());
                break;
            }
        }
    }

    return 0;
}
