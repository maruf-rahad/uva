#include<bits/stdc++.h>
using namespace std;
bitset<30>appeard,visited;
vector<int>v[30];

vector<int>vec;

char ch1[30],ch2[30];

void dfs(int u)
{
    visited.set(u);
    for(int i = 0;i<v[u].size();i++)
    {
        int p = v[u][i];

            if(!visited[p]&&appeard[p])
            {
                dfs(p);
            }
    }

    vec.push_back(u);


}
int main()
{
    int i,j,a,b,x,y;

    char str1,str2;
    while(scanf("%s",&ch1)==1)
    {
        while(scanf("%s",&ch2)==1)
        {
            if(strcmp(ch2,"#")==0)break;

            for(i=0;i<strlen(ch1)&&i<strlen(ch2);i++)
            {
                if(ch1[i]!=ch2[i])
                {
                    appeard.set(ch1[i]-'A');
                    appeard.set(ch2[i]-'A');

                    v[ch1[i]-'A'].push_back(ch2[i]-'A');
                    break;
                }
            }
            strcpy(ch1,ch2);
        }

        for(i=0;i<=25;i++)
        {
            if(!visited[i]&&appeard[i])
            {
                dfs(i);
            }
        }

        for(i=vec.size()-1;i>=0;i--)
        {
            printf("%c",vec[i]+'A');
        }
        printf("\n");

    }















return 0;
}
