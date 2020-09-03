#include<bits/stdc++.h>
using namespace std;
int n=1000000;
int ara[1100002];
void sieve()
{
    ara[1]=1;
    int i,j;

	int s=sqrt(n);
	for(i=4;i<=n;i+=2) {
            ara[i]=1;
	}
	for(i=3;i<=s;i+=2){
		if(ara[i]==0)
		{
			for(j=i*i;j<=n;j+=i)
            {
                ara[j]=1;
            }
		}
	}




}
int main()
{
    //freopen("input.txt","w",stdout);
    sieve();

    int a,b,i,j,c,d,x,y,m;
    while(scanf("%d",&m)==1&&m!=0)
    {
        int flag = 0;
        for(i=1;i<=m/2;i++)
        {
            if(ara[i]==0&&ara[m-i]==0)
            {
                printf("%d = %d + %d\n",m,i,m-i);
                flag = 1;
                break;
            }
        }
        if(flag==0)
        {
            printf("Goldbach's conjecture is wrong.\n");
        }
    }

return 0;
}
