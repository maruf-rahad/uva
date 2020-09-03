#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,a,b,i,j,k,length,l;
    char ch[100000];
    char ah[120];
    long long ara[120];
    long long sum;
    double x;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        scanf("%lld\n",&m);
        sum=0;
        for(j=0;j<m;j++){
            scanf("%c %lld\n",&ah[j],&ara[j]);
        }
        scanf("%lld\n",&b);
        for(j=0;j<b;j++){
            gets(ch);
            length=strlen(ch);
            for(k=0;k<m;k++){
                for(l=0;l<length;l++){
                    if(ah[k]==ch[l]){
                        sum=sum+ara[k];
                    }
                }
            }
        }
        x=sum;
        printf("%0.2lf$\n",x/100);
    }
    return 0;
}
