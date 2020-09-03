#include<bits/stdc++.h>
using namespace std;
char letter[7] = {'I','E','H','O','V','A','#'};
char ch[10][10];
int r[4] = {0,0,1,-1};
int c[4] = {1,-1,0,0};
int flag = 0;
int flag2 = 0;
int n,m;
void makestep(int x,int y,int xx,int yy)
{
    if(flag2==1)printf(" ");
    flag2 = 1;
    if(abs(x-xx)==1)printf("forth");
    else if(yy-y==1)printf("right");
    else if(yy-y==-1)printf("left");

}
void  marcus(int x,int y,int step)
{
    if(flag==1||step==7){
           flag = 1;
        return;
    }
    for(int i=0;i<4;i++)
    {
        int xx = x+r[i];
        int yy = y+c[i];

        if(ch[xx][yy]==letter[step]&&xx>=1&&xx<=n&&yy>=1&&yy<=m)
        {
            makestep(x,y,xx,yy);
           // printf("going %d %d\n",xx,yy);
            if(step==7){
                flag = 1;
                return ;
            }
            marcus(xx,yy,++step);
        }
    }


}



int main()
{
  //  freopen("output.txt","w",stdout);
    int a,b,i,j,x,y,t;
    char str1,str2;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d",&n,&m);
        getchar();

        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                scanf("%c",&ch[i][j]);
                if(ch[i][j]=='@'){
                    x = i;
                    y = j;
                }
            }
            getchar();
        }
        flag = 0;
        flag2 = 0;
     //   for(i=0;i<6;i++)printf("%c \n",letter[i]);
    //    printf("yes\n");
        marcus(x,y,0);
        printf("\n");


    }















return 0;
}
