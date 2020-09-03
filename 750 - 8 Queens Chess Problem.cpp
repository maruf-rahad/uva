#include<bits/stdc++.h>
using namespace std;
int row[8],a,b,linecounter;

bool place(int r,int c)
{
    for(int i=0;i<c;i++)
    {
        if(row[i]==r||abs(row[i]-r)==abs(i-c))return false;
    }
    return true;
}

void backtrack(int c)
{

    if(c==8&&row[b]==a)
    {
        printf("%2d      %d",++linecounter,row[0]+1);
        for(int i=1;i<8;i++)printf(" %d",row[i]+1);

        printf("\n");
        return ;

    }
    for(int r=0;r<8;r++)
    {
        if(place(r,c))
        {
            row[c] = r;
            backtrack(c+1);
        }
    }

}
int main()
{
   // freopen("output.txt","w",stdout);
    int t,n,m,i,j,k=0;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&a,&b);
        a--;
        b--;
        if(k>0)printf("\n");
        memset(row,0,sizeof(row));
        printf("SOLN       COLUMN\n");
        printf(" #      1 2 3 4 5 6 7 8\n\n");
        linecounter = 0;
        backtrack(0);
        k++;

    }











return 0;
}
