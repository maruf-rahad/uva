#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i,j,k,x,y,length,length2,n,flag;
    char ch[250],str[250],str2;
    int ara[250];
    int ara2[250];
    int ara3[250];
    scanf("%d%c",&n,&str2);
    for(i=1; i<=n; i++)
    {
        scanf("%s %s",&ch,&str);
        length=strlen(ch);
        length2=strlen(str);
        for(j=0; j<240; j++)
        {
            ara[j]=0;
            ara2[j]=0;
            ara3[j]=0;
        }
        x=0;
        for(j=0; j<length; j++)
        {

            a=ch[j]-'0';
            ara[x]=a;
            x++;
        }
        y=0;
        for(j=0; j<length2; j++)
        {
            a=str[j]-'0';

            ara2[y]=str[j]-'0';
            y++;
        }
        if(x<y)
        {
            swap(x,y);
        }
        int carry=0;
        flag=0;
        int z=0;
        for(j=0; j<=x; j++)
        {
            a=ara[j]+ara2[j]+carry;
            if(a>9)
            {
                a=a%10;
                carry=1;
                if(a!=0)flag=1;
            }
            else
            {
                if(a!=0)flag=1;
                carry=0;
            }
            if(flag==0&&a==0)continue;
            ara3[z]=a;
            z++;
        }
        if(ara3[z-1]==0)z=z-1;
        for(j=0; j<z; j++)
        {
            printf("%d",ara3[j]);

        }
        printf("\n");


    }
    return 0;
}
