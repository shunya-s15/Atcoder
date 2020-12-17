#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
const int64_t mod=1e9+7;
int64_t powmod(int x,int k){
    int64_t ans=1;
    for(int64_t i=0;i<k;i++){
        ans=ans*x%mod;
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    int64_t ans=powmod(10,n)-powmod(9,n)-powmod(9,n)+powmod(8,n);
    ans%=mod;
    ans=(ans+mod)%mod;
    cout << ans << endl;
    return 0;
}