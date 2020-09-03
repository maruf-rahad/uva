#include<bits/stdc++.h>
using namespace std;
char str[20];
vector<char>v;

void backtrack(int att,int n,char ch[],int m,int sum)
{
    if(sum == m)return;
    char ch2[20];
    if(att==-1)
    {
        att = n+1;
        strcpy(ch2,ch);
        sum--;
    }
    else
    {
       int x = 0;
        for(int i=att; i>=0; i--)
        {
            printf("%c",ch[i]);
            ch2[x++] = ch[i];
        }
        for(int i=n; i>att; i--)
        {
            printf("%c",ch[i]);
            ch2[x++] = ch[i];
        }
        ch2[x] = '\0';
        printf("\n");
    }

    backtrack(att-1,n,ch2,m,sum+1);
}
int fact(int n)
{
    int sum = 1;
    for(int i=1;i<=n;i++)
    {
        sum = sum*i;
    }

    return sum;
}

int main()
{
    int j,k=0;
    char ch[20];
    while(scanf("%s",&ch)==1)
    {
        v.clear();
        j = 0;
        if(k>0)printf("\n");
        k++;
        backtrack(strlen(ch)-1,strlen(ch)-1,ch,fact(strlen(ch)),0);
    }







    return 0;
}
