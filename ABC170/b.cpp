#include<stdio.h>
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    int i,j;
    for(i=0;i<=x;i++){
        j=x-i;
        if(2*i+4*j == y){
            printf("Yes\n");
            return 0;
        }
    }
    printf("No\n");
    return 0;
}