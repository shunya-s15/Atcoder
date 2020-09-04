#include<stdio.h>
typedef long long ll;

int main(){
    int n;
    int a[200005];
    int i;
    int mod = 1000000007;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    ll ans = 0;
    ll key = 0;
    for(i=0;i<n;i++){
        key = key+a[i];
        key = key%mod;
    }
    for(i=0;i<n;i++){
        key = key-a[i];
        if(key<0){
            key = key+mod;
        }
        ans = (ans + a[i]*key)%mod;
    }
    printf("%lld\n",ans);
    return 0;
}