#include<stdio.h>
typedef long long ll;

ll popcount(ll n){ //できなかった。longlong型だと2^64までで受け取り切れないのでstring型で処理するらしい。
    ll count = 0;
    ll i;
    for(i=0;i<n;i++){
        if(n & (1<<i)){
            count++;
        }
    }
    return count;
}

ll f(ll n){
    ll ans = 0;
    while(n != 0){
        n = n%popcount(n);
        ans++;
    }
    return ans;
}

ll ruijou(ll x,ll n){
    ll i;
    ll ans = 1;
    for(i=0;i<n;i++){
        ans = ans*x;
    }
    return ans;
}

ll jusinsuu(ll n,ll x){
    ll i;
    ll ans = 0;
    for(i=0;i<n;i++){
        if((x/ruijou(10,i))%10 == 1){
            ans = ans + ruijou(2,i);
        }
    }
    return ans;
}

int main(){
    ll N,X,y,z,i;
    scanf("%lld",&N);
    scanf("%lld",&X);
    printf("%lld",X);
    //printf("%lld\n",X);
    y = jusinsuu(N,X);
    for(i=N-1;i>=0;i--){
        if(y&(1<<i)){
            z = y - (1<<i);
        }else{
            z = y + (1<<i);
        }
        //printf("%lld\n",f(z));
    }
    return 0;
}