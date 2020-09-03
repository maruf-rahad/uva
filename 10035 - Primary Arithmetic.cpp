 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     int a,b,i,x,s,j,y,c,carry,flag=0;
     int ara[10];
     int ara2[10];
     while(scanf("%d %d",&a,&b)==2){
            if(a==0&&b==0)break;
            j=0;
            for(i=0;i<10;i++){
                ara[i]=0;
                ara2[i]=0;
            }
            i=0;
        while(a>0){
                ara[i]=a%10;
             a=a/10;
             i++;
        }while(b>0){
        ara2[j]=b%10;
        b=b/10;
        j++;
        }
        if(i>=j){
                y=i;
        }

        else{
                y=j;
        }
        carry=0;
        flag=0;
        for(i=0;i<y;i++){
                c=ara[i]+ara2[i];
            if((flag==0&&c>9)||(flag==1&&c>8)){
                carry=carry+1;
                flag=1;
            }else{
            flag=0;
            }


        }
        if(carry==0){
            printf("No carry operation.\n");
        }else if(carry==1){
        printf("1 carry operation.\n");
        }else{
        printf("%d carry operations.\n",carry);
        }

     }
     return 0;
 }
