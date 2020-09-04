#include<stdio.h>

int main(){
    int d,t,s;
    scanf("%d%d%d",&d,&t,&s);
    int key = d/s;
    if(d%s != 0){
        key = key+1;
    }
    //printf("%d\n",key);
    if(key <= t){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}