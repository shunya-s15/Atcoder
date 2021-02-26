#include<stdio.h>
int main(){
    int x[10];
    scanf("%d%d%d%d%d",&x[0],&x[1],&x[2],&x[3],&x[4]);
    int i;
    for(i=0;i<5;i++){
        if(x[i]==0){
            printf("%d\n",i+1);
            break;
        }
        //printf("ok");
    }
    return 0;
}