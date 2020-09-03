#include<bits/stdc++.h>
using namespace std;
map<string,deque<string> >mp;
map<string,deque<string> > :: iterator it;
deque<string> :: iterator it2;
map<string,int>cnt;
char ch[5][10] = {"Ja","Sam","Sha","Sid","Tan"};
int main()
{

    int t,n,m,a,b,i,j,x,y,k=0;
    string s,s2;

    scanf("%d",&t);
    while(t--)
    {
        mp.clear();
        cin>>m>>n>>s2;

        for(i=0;i<5;i++)
        {
            cnt[ch[i]] = 0;
            scanf("%d",&a);
            for(j=0;j<a;j++)
            {
                cin>>s;
                mp[ch[i]].push_back(s);
            }
        }

        int sum = 0;

        while(sum<n)
        {
            if(sum+m<=n)
            {
                a = m;
                sum +=a;
            }
            else{

                a = n-sum;
                sum = sum+a;
            }
            cnt[s2] +=a;
            sum+=2;


            string s3 = mp[s2].front();
            mp[s2].pop_front();
            mp[s2].push_back(s3);
            s2 = s3;
        }



        printf("Case %d:\n",++k);

        for(i=0;i<5;i++)
        {
            printf("%s %d\n",ch[i],cnt[ch[i]]);
        }
    }

































return 0;
}
