#include<stdio.h>
typedef long long ll;
int main(){
    ll N,K,i;
    ll A[200002];
    scanf("%lld%lld",&N,&K);
    for(i=1;i<=N;i++){
        scanf("%lld",&A[i]);
    }
    for(i=1;i<=N-K;i++){
        if(A[i]<A[K+i]){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
    return 0;
}
/*ll a[300000]; //まともにpointを計算すると値が（１０＾９）＾（２＾５）まで膨らんでlong longでも受け取り切れない
ll totalpoint(ll n,ll k){
    ll i,ans;
    ans = 1;
    for(i=n-k+1;i<=n;i++){
        ans = ans*a[i];
    }
    return ans;
}
int main(){
    ll N,K;
    ll i,point,atopoint;
    scanf("%lld%lld",&N,&K);
    for(i=1;i<=N;i++){
        scanf("%lld",&a[i]);
    }
    point = totalpoint(K,K);
    for(i = K+1;i<=N;i++){
        atopoint = (point/a[i-K])*a[i];
        //printf("%lld",point);
        if(point<atopoint){
            printf("Yes");
        }else{
            printf("No");
        }
        printf("\n");
        point = atopoint;
    }
    //printf("%lld",atopoint);
    return 0;
}*/