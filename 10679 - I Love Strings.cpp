#include<bits/stdc++.h>
using namespace std;
char ch[1005];
char ch2[1005];
char str[1005];
map<string,int>mp;
vector<string>v;

struct node
{
    int endmark = 0;
    node *next[55];

    node()
    {
        endmark = 0;
        for(int i=0; i<=54; i++)
            next[i] = NULL;
    }
};
node *root;

void insertt(char *str,int len)
{
    int id;
    node *curr = root;

    for(int i=0; i<len; i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
            id = str[i]-'A'+1;
        else if(str[i]>='a'&&str[i]<='z')
            id = str[i]-'a'+27;

       if(curr->next[id]==NULL)
        {
            curr->next[id] = new node();
        }
        curr = curr->next[id];
    }
    curr->endmark++;

}

node *curr = root;
void searchh()
{
    int id,x,a;


            if(str[i]>='A'&&str[i]<='Z')id = str[i]-'A'+1;
            else if(str[i]>='a'&&str[i]<='z')id = str[i]-'a'+27;

            if(curr->next[id]==NULL){}

}
int main()
{
    int t,n,m,a,b,i,j,x,y;
    scanf("%d",&t);
    while(t--)
    {
        root = new node();
        v.clear();
        mp.clear();
        scanf("%s",&ch);

        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            scanf("%s",&ch2);
            v.push_back(ch2);
            insertt(ch2,strlen(ch2));
            mp[ch2] = 0;
        }
        searchh(strlen(ch),0);
    }






























    return 0;
}
