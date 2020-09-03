#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("output.txt","w",stdout);
    string s;
    int n,a,b,i,j,x,y,k=0;

    while(scanf("%d",&n)==1)
    {
       // printf("Case %d:\n",++k);
        if(n==0)break;
         printf("Case %d:\n",++k);
    getchar();
         printf("#include<string.h>\n#include<stdio.h>\nint main()\n{\n");
    while(n--)
    {
        printf("printf(\"");
        getline(cin,s);

        for(i=0;i<s.size();i++)
        {
            if(s[i]=='"'){
                printf("\\\"");
            }
            else if(s[i]=='\\')
            {
                printf("\\\\");
            }
            else if(s[i]=='\'')
            {
                printf("\\'");
            }
            else{
                printf("%c",s[i]);
            }

        }
        printf("\\n\");\n");
    }
        printf("printf(\"\\n\");\nreturn 0;\n}\n");




    }















return 0;

}
