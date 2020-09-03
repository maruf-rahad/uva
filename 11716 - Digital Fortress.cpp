#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,i,sum,l,a,b,j;
    string s;

    scanf("%d",&t);

    getchar();

    while(t--)
    {
        getline(cin,s);

        l = s.size();

        a = sqrt(l);
        b = a*a;

        if(b!=l)
        {
            printf("INVALID\n");
        }
        else{
            for(i=0;i<a;i++)
            {
                for(j=0;j<a;j++)
                {
                    printf("%c",s[i+j*a]);
                }
            }
            printf("\n");
        }



    }








return 0;
}
