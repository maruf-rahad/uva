#include<bits/stdc++.h>
using namespace std;
int parent[20000];
void makeset(int n)
{
    for(int i = 1 ; i<=n ; i++)
    {
        parent[i] = i;
    }
}

int find_parent(int a)
{
    if(a==parent[a])
    {
        return a;
    }

    parent[a] = find_parent(parent[a]);

    return parent[a];


}
int main()
{
    //freopen("output.txt","w",stdout);
    char str;
    int n,m,i,j=0,x,y,a,b,t,right,wrong;
    string s;

    scanf("%d",&t);
    while(t--)
    {
        right = 0;
        wrong = 0;
        scanf("%d%c",&n,&str);
        makeset(n);

        while(1)
        {
            getline(cin,s);
            if(s.size()==0)
            {
                break;
            }
            stringstream ss(s);
            a = s[2]-'0';
            i = 3;
            while(s[i]!=' ')
            {
                a = a*10+s[i]-'0';
                i++;
            }
            i++;
            b =s[i]-'0';
            i++;
            while(s[i]!='\0')
            {
                b = b*10+s[i]-'0';
                i++;
            }

            if(s[0]=='c')
            {

                x = find_parent(a);
                y = find_parent(b);
                if(x!=y)
                {
                    parent[y] = x;
                }
            }
            else if(s[0]=='q')
            {
                x = find_parent(a);
                y = find_parent(b);
                if(x==y)
                {
                    right++;
                }
                else{
                    wrong++;
                }
            }
        }
        if(j>0)printf("\n");

        printf("%d,%d\n",right,wrong);
        j++;






    }







    return 0;
}
