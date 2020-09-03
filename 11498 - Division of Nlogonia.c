#include<stdio.h>
int main()
{
    int t,m,n,x,y,i;
    while(1){
            scanf("%d",&t);
        if(t==0){
            break;
        }
        scanf("%d %d",&n,&m);
        for(i=1;i<=t;i++){
                scanf("%d %d",&x,&y);
                if(x==n||y==m){
                    printf("divisa\n");
                }
                if(x>n&&y>m){
                    printf("NE\n");
                }
                if(x>n&&y<m){
                    printf("SE\n");
                }
                if(x<n&&y>m){
                    printf("NO\n");
                }
                if(x<n&&y<m){
                    printf("SO\n");
                }

        }
    }
    return 0;

}
