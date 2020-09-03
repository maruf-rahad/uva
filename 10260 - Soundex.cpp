#include<bits/stdc++.h>
using namespace std;
int main()
{
	char ch[100];
	int a,b,flag,i,j,length;
	while(scanf("%s",ch)==1){
			length=strlen(ch);
			flag=0;
	for(i=0;i<length;i++){
		if(ch[i]=='B'||ch[i]=='F'||ch[i]=='P'||ch[i]=='V'){
				if(flag!=1){
						printf("1");
				}
			flag=1;
		}else if(ch[i]=='C'||ch[i]=='G'||ch[i]=='J'||ch[i]=='K'||ch[i]=='K'||ch[i]=='Q'||ch[i]=='S'||ch[i]=='X'||ch[i]=='Z'){
			if(flag!=2){
		printf("2");
			}
		flag=2;
		}else if(ch[i]=='D'||ch[i]=='T'){
			if(flag!=3){
		printf("3");
			}
		flag=3;
		}else if(ch[i]=='L'){
			if(flag!=4){
		printf("4");
			}
		flag=4;
		}else if(ch[i]=='M'||ch[i]=='N'){
			if(flag!=5){
		printf("5");
			}
		flag=5;
		}else if(ch[i]=='R'){
			if(flag!=6){
		printf("6");
			}
		flag=6;
		}
		else{
			flag=10;
		}
	}
	printf("\n");
	}
return 0;
}
