#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
const int64_t mod=1e9+7;

int main(){
    int64_t n;
    cin >> n;
    vector<int64_t> a(n);
    for(int64_t i=0;i<n;i++){
        cin >> a.at(i);
    }
    int64_t ans=0;
    int64_t kakeru=0;
    for(int64_t i=0;i<n;i++){
        kakeru += a.at(i)%mod;
        kakeru %= mod;
    }
    for(int64_t i=0;i<n;i++){
        kakeru -= a.at(i)%mod;
        kakeru = (kakeru+mod)%mod;
        ans+=a.at(i)*kakeru%mod;
        ans%=mod;
    }
    cout << ans << endl;
    return 0;
}