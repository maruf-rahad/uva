#include<bits/stdc++.h>
using namespace std;
/*vector<int>v;
vector<int>v2;
vector<int>v3;
int visited[11],sum;
int pos[11];
bool check_prime(int n)
{
    int s = sqrt(n);
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

void generat(int att,int tot)
{
    if(att==sum+1)
    {
        v2.push_back(tot);
        return;
    }

    for(int i=1; i<=sum; i++)
    {
        if(visited[i]==0)
        {
            visited[i] = 1;
            pos[att] = v[i-1];
            tot= tot*10+v[i-1];
            // printf("%d ",tot);
            generat(att+1,tot);
            visited[i] = 0;
            tot=tot/10;
        }
    }
}
*/
int main()
{
   // freopen("output.txt","w",stdout);
    /*int a,b,i,j,n,m;
    m = n;
    for(j=3; j<=8000000; j+=2)
    {
        m = j;
        sum = 0;
        memset(visited,0,sizeof(visited));
        v.clear();
        v2.clear();
        if(!check_prime(j))
        {
            continue;
        }
        while(m!=0)
        {
            sum++;
            v.push_back(m%10);
            m = m/10;
        }

        generat(1,0);
        int cnt = 0;
        for(i=0; i<v2.size(); i++)
        {
            if(check_prime(v2[i]))
            {
                cnt++;
            }
        }
        if(cnt==v2.size())
        {
            printf("ok %d \n",j);
            v3.push_back(j);
        }

    }
    printf("\nfinal : \n");
    for(i=0;i<v3.size();i++)
    {
        printf("%d\n",v3[i]);
    }
    */

    int n,m,a,b,i,j,sum,sub;
    int ara[] = {2, 3, 5, 7, 11, 13, 17, 31, 37, 71, 73, 79, 97, 113, 131, 199, 311, 337, 373, 733, 919, 991};

        while(scanf("%d",&n)==1&&n!=0)
        {
            int flag = 0;
            m = n;
            sum = 0;
            sub = 0;
            while(m!=0)
            {
                m = m/10;
                sub++;
            }
            for(i=0;i<22;i++)
            {
                m = ara[i];
                sum = 0;
                while(m!=0)
                {
                    m = m/10;
                    sum++;
                }
                if(ara[i]>n&&sum==sub)
                {
                    printf("%d\n",ara[i]);
                    flag = 1;
                    break;
                }
            }
            if(flag==0)
            {
                printf("0\n");
            }
        }

    return 0;
}
