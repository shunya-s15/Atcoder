#include<stdio.h>
typedef long long ll;
int main(){
    ll N,K,i;
    ll A[300000];
    scanf("%lld%lld",&N,&K);
    for(i=1;i<=N;i++){
        scanf("%lld",&A[i]);
    }
    for(i=1;i<=N;i++){
        if(A[i]<A[K+i]){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
    return 0;
}