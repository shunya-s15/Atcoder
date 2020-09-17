#include <stdio.h>
typedef long long ll;
int main(){
    ll a,b,c,d;
    ll ans[5];
    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
    ans[0] = a*c;
    ans[1] = a*d;
    ans[2] = b*c;
    ans[3] = b*d;
    int i,j;
    ll swap;
    for(i=0;i<4;i++){
        for(j=i+1;j<4;j++){
            if(ans[i] > ans[j]){
                swap = ans[i];
                ans[i] = ans[j];
                ans[j] = swap;
            }
        }
    }
    printf("%lld\n",ans[3]);
    return 0;
}