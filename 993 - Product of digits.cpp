#include<bits/stdc++.h>
using namespace std;
vector<int>v;
vector<int>v2;
int main()
{
   // freopen("output.txt","w",stdout);
    int n,m,i,j,x,y,t;
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    scanf("%d",&t);
    while(t--)
    {
        v2.clear();
        scanf("%d",&n);
        if(n==1||n==0)
        {
            printf("%d\n",n);
            continue;

        }
        x = 0;
        y = 0;
        int five = 0,seven = 0;
        for(i=0;i<v.size();i++)
        {
            while(n%v[i]==0)
            {
                if(v[i]==2)
                    x++;
                else if(v[i]==3)
                    y++;
                else if(v[i]==5)
                    five++;
                else if(v[i]==7)
                    seven++;

                n = n/v[i];
            }
        }
      //  printf("%d %d %d %d\n",x,y,five,seven);
        if(n==1)
        {
            int nine = y/2;
                y = y-nine*2;
                int eight = x/3;
                x = x-eight*3;
            int six = min(x,y);
          //  printf("six = %d\n",six);
                x = x - six;
                y = y - six;

                int four = x/2;
                x = x-four*2;
                while(x--)
                    printf("2");
                while(y--)
                    printf("3");
                while(four--)
                    printf("4");
                while(five--)
                    printf("5");
                while(six--)
                    printf("6");
                while(seven--)
                    printf("7");
                while(eight--)
                    printf("8");
                while(nine--)
                printf("9");
            printf("\n");
        }
        else{
            printf("-1\n");
        }



    }






return 0;
}
