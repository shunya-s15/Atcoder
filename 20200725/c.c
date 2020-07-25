#include<stdio.h>
typedef long long ll;
ll a[300000];
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
}