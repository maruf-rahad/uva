#include<bits/stdc++.h>
using namespace std;
map<char , int> power;
map<char,int> used;
map<char,int> :: iterator it;
char ch[50];
vector<char>v;
int n;

map<char,vector<char> > mp;
map<char,vector<char> > :: iterator it2;

void khelaHobe(int att)
{


    if(att==n+1)
    {


        for(int i=1;i<=n;i++)
        {
            printf("%c",ch[i]);
        }
        printf("\n");

        return;
    }

   for(int j = 0; j<v.size();j++)
   {


       // printf("yes\n");
        char ah = v[j];
        int a = power[ah];
        //printf("%c %d\n",ah,a);
        if(a<=0&&used[ah]==0)
        {
           //printf("entering %c\n",ah);

            used[ah] = 1;
            ch[att] = ah;
            for(int i=0;i<mp[ah].size();i++)
            {
                char bh = mp[ah][i];
                power[bh] = power[bh] - 1;
            }

            khelaHobe(att+1);
            used[ah] = 0;
            char bh;
            for(int i=0;i<mp[ah].size();i++)
            {
              //  printf("crassing %c\n",ah);
                 bh = mp[ah][i];

                power[bh] = power[bh] + 1;

            }
            //printf("%c %d\n",bh,power[bh]);

        }

    }

}
int main()
{
  //  freopen("output.txt","w",stdout);
    string s,s2;

    char x,y,k = 0;

    while(getline(cin,s))
    {
        ++k;

        power.clear();
        mp.clear();
        used.clear();
        v.clear();

        stringstream ss(s);

        while(ss>>x)
        {
            v.push_back(x);
            power[x] = 0;
            mp[x];
            used[x] = 0;
        }

        sort(v.begin(),v.end());
        getline(cin,s);
        if(k>1)printf("\n");
       stringstream ss2(s);
        while(ss2>>x)
        {
            ss2>>y;
            mp[x].push_back(y);

            power[y] = power[y]+1;


        }
        n = used.size();


        khelaHobe(1);






    }

































return 0;
}
