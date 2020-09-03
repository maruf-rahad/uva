#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[200],str;
    int a,b,c,d,i,j,n,sum,length;
    scanf("%d%c",&n,&str);
    for(i=1;i<=n;i++){
            gets(ch);
            sum=0;
    length=strlen(ch);
    for(j=0;j<length;j++){
        if(ch[j]=='a'||ch[j]=='d'||ch[j]=='g'||ch[j]=='j'||ch[j]=='m'||ch[j]=='p'||ch[j]=='t'||ch[j]=='w')sum=sum+1;
        if(ch[j]=='b'||ch[j]=='e'||ch[j]=='h'||ch[j]=='k'||ch[j]=='n'||ch[j]=='q'||ch[j]=='u'||ch[j]=='x')sum=sum+2;
        if(ch[j]=='c'||ch[j]=='f'||ch[j]=='i'||ch[j]=='l'||ch[j]=='o'||ch[j]=='r'||ch[j]=='v'||ch[j]=='y')sum=sum+3;
        if(ch[j]=='s'||ch[j]=='z')sum=sum+4;
        if(ch[j]==' ')sum=sum+1;
    }
    printf("Case #%d: %d\n",i,sum);

    }

return 0;
}
