#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i,j,n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d",&a,&b);
        if(b%a==0){
            printf("%d %d\n",a,b);
        }
        else{

            printf("-1\n");
        }

    }


return 0;
}
