#include<stdio.h>
typedef long long ll;

int main(){
    ll i,n;
    ll redcount = 0;
    ll whitecount = 0;
    char c[200005];
    scanf("%lld",&n);
    //printf("%lld\n",n);
    for(i=0;i<=n;i++){
        scanf("%c",&c[i]);
        if(c[i] == 'R'){
            redcount++;
        }
    }
    for(i=0;i<=redcount;i++){
        if(c[i] == 'W'){
            whitecount++;
        }
    }
    printf("%lld\n",whitecount);
    return 0;
}