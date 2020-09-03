#include<bits/stdc++.h>
using namespace std;
char ch[70][70];
int flag;
int a,b,n,m;

void moveRight()
{
  //  printf("age R flag %d\n",flag);

    if(flag==1)flag = 2;//east
    else if(flag==2)flag = 3;//south
    else if(flag==3)flag = 4;//west
    else if(flag==4)flag = 1;//north

  //  printf("flag =  %d\n",flag);
}
void moveLeft()
{
   // printf("age L flag %d\n",flag);

    if(flag==1)flag = 4;//west
    else if(flag==4)flag = 3;//south
    else if(flag==3)flag = 2;//east
    else if(flag==2)flag = 1;//north

   // printf("flag = %d\n",flag);
}
void moveFront()
{
    int x,y;
    if(flag==1)
    {
        x = a-1;
        y = b;
    }
    else if(flag==2)
    {
        x = a;
        y = b+1;
    }
    else if(flag==3)
    {
        x = a+1;
        y = b;
    }
    else if(flag==4)
    {
        x = a;
        y = b-1;
    }
   // printf("%d %d  X%cX\n",x,y,ch[x][y]);

    if(x>=0&&x<n&&y>0&&y<m&&ch[x][y]==' ')
    {
      //  printf("yesyes\n\n");
        a = x;
        b = y;
    }

   // printf("now %d %d\n",a,b);

}




int main()
{
   // freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);
    int t,i,j,x,y,k = 0;;
    char str;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
         getchar();
        for(i=0;i<n;i++)
        {
            gets(ch[i]);
        }
       /* printf("\n\n");
        for(i=0;i<n;i++)
        {
            printf("%s\n",ch[i]);
        }*/
        scanf("%d %d",&a,&b);
        a--;
        b--;

       // printf("%d %d\n",a,b);
        flag = 1;
       while(1)
       {
           cin>>str;
           if(str=='Q')break;
           if(str=='R')moveRight();
           if(str=='L')moveLeft();
           if(str=='F')moveFront();
       }
       if(k>=1)printf("\n");
       k++;

       printf("%d %d ",a+1,b+1);
       if(flag==1)printf("N");
       else if(flag==2)printf("E");
       else if(flag==3)printf("S");
       else if(flag==4)printf("W");
       printf("\n");

    }











return 0;
}
