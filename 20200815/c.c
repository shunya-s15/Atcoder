#include<stdio.h>
typedef long long ll;
ll position,d;

ll zettaiti(ll key){
    if(key > 0){
        return key;
    }else{
        return -key;
    }
}

int main(){
    ll x,k,i;
    scanf("%lld%lld%lld",&x,&k,&d);
    position = x;
    if(position >0){
        for(i=k;i>0 && position>0;i--){
            position = position-d;
        }
        if(i%2 == 1){
            position = position+d;
        }
    }else{
        for(i=k;i>0 && position<0;i--){
            position = position+d;
        }
        if(i%2 == 1){
            position = position-d;
        }
    }
    printf("%lld\n",zettaiti(position));
    return 0;
}