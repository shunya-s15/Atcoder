#include<stdio.h>
int p[200];

int judge(int x,int n){
    int i;
    for(i=0;i<n;i++){
        if(p[i] == x){
            return 1;
        }
    }
    return 0;
}
int main(){
    int x,n;
    scanf("%d%d",&x,&n);
    if(n == 0){
        printf("%d\n",x);
        return 0;
    }
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
    for(i=0;i<n;i++){
        if(judge(x-i,n) == 0){
            printf("%d\n",x-i);
            return 0;
        }else if(judge(x+i,n) == 0){
            printf("%d\n",x+i);
            return 0;
        }
    }
    if(x-n>=0){
        printf("%d\n",x-n);
    }else{
        printf("%d\n",x+n);
    }
    return 0;
}