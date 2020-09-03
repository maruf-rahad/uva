#include<bits/stdc++.h>
using namespace std;
vector<string>v;
int n,m,sum;
int visited[110][110];
int r[] = {0,0,1,-1,1,1,-1,-1};
int c[] = {1,-1,0,0,1,-1,1,-1};
void zero()
{
    for(int i = 0;i<=105;i++)
    {
        for(int j=0;j<=105;j++)
        {
            visited[i][j] = 0;
        }
    }
}

void dfs(int x,int y)
{
    sum++;
    visited[x][y] = 1;

    for(int i=0;i<8;i++)
    {
        int xx = x+r[i];
        int yy = y+c[i];

       // printf("xx = %d  yy = %d  %d %d %d\n",xx,yy,visited[xx][yy],n,m);

        if(xx>=0&&xx<n&&yy>=0&&y<m&&visited[xx][yy]==0&&v[xx][yy]=='W')
        {
           // printf("going %d %d\n",xx,yy);
            dfs(xx,yy);
           // printf("back %d %d\n",xx,yy);
        }
    }

}
int main()
{
   //freopen("output.txt","w",stdout);

    int t,i,j,x,y,k=0;
    string s;

    scanf("%d",&t);
    getchar();
    getchar();
    while(t--)
    {

        v.clear();
      //  printf("%d\n",v.size());
            while(1)
            {
                getline(cin,s);
                if(s[0]!='L'&&s[0]!='W')
                {
                    break;
                }
                v.push_back(s);
            }
            k++;
            if(k>1)printf("\n");
            n = v.size();
            m = v[0].size();


          //  printf("\n\n");
             // printf("%d %d\n",n,m);
           /* for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                {
                    printf("%c",v[i][j]);
                }
                printf("\n");
            }*/

            while(1)
            {
                stringstream ss(s);

                ss>>x;
                ss>>y;
              //  printf("%d %d\n",x,y);

                zero();
                sum = 0;
                dfs(x-1,y-1);

                printf("%d\n",sum);

                getline(cin,s);

                if(s.size()==0)break;











        }

    }










    return 0;
}
