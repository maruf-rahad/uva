#include<stdio.h>
#include<string.h>
int main()
{
    int n,m,a,b,x,y,i,j,sum,k,l,length;
    char str1,str2,ah,bh;
    float s;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            sum=0;
         scanf("%d%c",&m,&ah);
         int ara[m];
         char ch[m];
         for(j=0;j<m;j++){
            scanf("%c%c%d%c",&ch[j],&str1,&ara[j],&str2);
         }
         scanf("%d%c",&a,&bh);
         char x[100000];
         for(j=0;j<a;j++){
            gets(x);
            length=strlen(x);
            for(k=0;k<m;k++){
                for(l=0;l<length;l++){
                    if(ch[k]==x[l]){
                        sum=sum+ara[k];
                    }
                }
            }
         }
         s=sum;
         printf("%0.2f$\n",s/100);
    }
    return 0;
}
