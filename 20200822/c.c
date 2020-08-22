#include<stdio.h>
typedef long long ll;
int main(){
    int n;
    int a[200005];
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    ll ans = 0;
    for(i=0;i<n-1;i++){
        if(a[i]-a[i+1]>0){
            ans = ans+(a[i]-a[i+1]);
            a[i+1] = a[i];
        }
    }
    printf("%lld\n",ans);
    return 0;
}