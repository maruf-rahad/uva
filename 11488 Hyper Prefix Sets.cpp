#include<bits/stdc++.h>
using namespace std;

struct node{

    node* next[2];
    int cnt[2];

    node()
    {
        next[0] = NULL;
        next[1] = NULL;
        cnt[0] = 0;
        cnt[1] = 0;
    }

};
node* root;

int insert(char* str,int len,int mx)
{
    node* curr = root;

    for(int i=0;i<len;i++)
    {
        int id = str[i]-'0';

        if(curr->next[id]==NULL)
        {
            curr->next[id] = new node();
        }
        curr = curr->next[id];
        curr->cnt[id]++;
        int a = curr->cnt[id]*(i+1);
        mx = max(mx,a);
    }

    return mx;

}

int main()
{
    char str[210];
    int n,m,i,j,a,b,t,mx;

    scanf("%d",&t);
    while(t--)
    {
        root = new node();
        mx = -99;
        scanf("%d",&n);

        while(n--)
        {
            scanf("%s",&str);

            mx = insert(str,strlen(str),mx);
        }
        printf("%d\n",mx);
    }











return 0;
}
