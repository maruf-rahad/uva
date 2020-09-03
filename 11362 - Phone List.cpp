#include<bits/stdc++.h>
using namespace std;
struct node{

    int endmark;
    node* next[10];
    node()
    {
        endmark = false;
        for(int i=0;i<=9;i++)
        {
            next[i] = NULL;
        }
    }
};node* root;
bool insert(char* str,int len)
{
    node* curr = root;
    for(int i=0;i<len;i++)
    {
        int id = str[i]-'0';
        if(curr->endmark)
        {
            return true;
        }
        if(curr->next[id]==NULL)
        {
            curr->next[id] = new node();
        }
        curr = curr->next[id];
    }
    if(curr->endmark)
    {
        return true;
    }
    else{

        curr->endmark = true;
    }
    for(int i=0;i<=9;i++)
    {
        if(curr->next[i]!=NULL)
        {
            return true;
        }
    }

    return false;



}

int main()
{
    int t,n,m,a,b,i,j;
    char str[15];
    scanf("%d",&t);
    while(t--)
    {
        root = new node();
        scanf("%d",&n);
        int flag = 0;

        for(i=1;i<=n;i++)
        {
            scanf("%s",&str);
            if(flag==0&&insert(str,strlen(str)))
            {
                flag = 1;
            }

        }

        if(flag==0)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }




    }










return 0;
}
