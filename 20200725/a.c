#include<stdio.h>
int main(){
    int N,x;
    scanf("%d",&N);
    if(400<=N && N<600){
        x = 8;
    }else if(600<=N && N<800){
        x = 7;
    }else if(800<=N && N<1000){
        x = 6;
    }else if(1000<=N && N<1200){
        x = 5;
    }else if(1200<=N && N<1400){
        x = 4;
    }else if(1400<=N && N<1600){
        x = 3;
    }else if(1600<=N && N<1800){
        x = 2;
    }else if(1800<=N && N<2000){
        x = 1;
    }
    printf("%d\n",x);
    return 0;
}