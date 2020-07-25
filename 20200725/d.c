#include<stdio.h>
int main(){
    int N,i;
    int A[100];
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        scanf("%d",&A[i]);
    }
    long money = 1000;
    long kabu = 0;
    for(i=1;i<=N;i++){
        if(money>=A[i]){
            if(i!=N && A[i]<A[i+1]){
                kabu = kabu + money/A[i];
                money = money%A[i];
            }
        }else{
            if(i==N || (i!=N && A[i]>A[i+1])){
                money = money + A[i]*kabu;
                kabu = 0;
            }
        }
        //printf("%d日目,kabu = %d,money = %d\n",i,kabu,money);
    }
    printf("%ld\n",money);
    return 0;
}