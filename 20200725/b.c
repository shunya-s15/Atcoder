#include<stdio.h>
int main(){
    int A,B,C,K;
    scanf("%d%d%d",&A,&B,&C);
    scanf("%d",&K);
    int i;
    int count = 0;
    for(i=0;A>=B;i++){
        B = B*2;
        count++;
    }
    for(i=0;B>=C;i++){
        C = C*2;
        count++;
    }
    if(count<=K){
        printf("Yes");
    }else{
        printf("No");
    }
    printf("\n");
    return 0;
}