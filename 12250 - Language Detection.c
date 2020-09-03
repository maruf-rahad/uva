#include<stdio.h>
#include<string.h>
int main()
{
    char ch[20];

    int i;
    i=0;
    while(1)
    {
        scanf("%s",ch);
        if(strcmp(ch,"#")==0)
        {
            break;
        }
        i=i+1;
        printf("Case %d: ",i);
        if(strcmp(ch,"HELLO")==0){
            printf("ENGLISH\n");
        }
        else if(strcmp(ch,"HOLA")==0){
            printf("SPANISH\n");
        }
        else if(strcmp(ch,"HALLO")==0){
                printf("GERMAN\n");
        }
        else if(strcmp(ch,"BONJOUR")==0){
            printf("FRENCH\n");
        }
        else if(strcmp(ch,"CIAO")==0){
            printf("ITALIAN\n");
        }
        else if(strcmp(ch,"ZDRAVSTVUJTE")==0){
            printf("RUSSIAN\n");
        }else{
        printf("UNKNOWN\n");
        }

    }
    return 0;
}
