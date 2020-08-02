#include<stdio.h>
typedef long long ll;
ll count = 0;
ll redcount = 0;
ll whitecount = 0;
ll n;
ll redposition=0;
ll whiteposition=1;
char c[2000];
ll White(ll x){
    ll i;
    for(i=x;i<=redcount;i++){
        if(c[i] == 'W'){
            return i;
        }
    }
    if(i == n-whitecount+1){
        return -1;
    }
}
ll Red(ll x){
    ll i;
    for(i=x;i<=n;i++){
        if(c[i] == 'R'){
            return i;
        }
    }
    if(i == n+1){
        return -1;
    }
}
ll swap(ll re,ll wh){
    char swap;
    swap = c[re];
    c[re] = c[wh];
    c[wh] = swap;
    count++;
}
int main(){
    ll i;
    scanf("%lld",&n);
    //printf("%lld\n",n);
    for(i=0;i<=n;i++){
        scanf("%c",&c[i]);
        if(c[i] == 'R'){
            redcount++;
        }
    }
    
    /*for(i=1;i<=n;i++){
        printf("%c\n",c[i]);
    }*/
    //printf("%lld\n",redcount);
    /*printf("%lld\n",redposition);
    printf("%lld\n",whiteposition);*/
    whitecount = n-redcount;
    redposition = redcount+1;
    //whiteposition = White(whiteposition);
    /*printf("%lld\n",redposition);
    printf("%d\n",whiteposition);*/
    if(redposition>n){
        printf("%lld\n",count);
        return 0;
    }
    while(1){
        /*Red;
        White;*/
        //printf("%lld %lld\n",redposition,whiteposition);
        if(redposition == -1){
            break;
        }else{
            swap(redposition,whiteposition);
        }
        redposition = Red(redposition);
        whiteposition = White(whiteposition);
    }
    printf("%lld\n",count);
    return 0;
}