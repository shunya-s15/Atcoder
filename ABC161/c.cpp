#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int64_t n,k;
    cin >> n >> k;
    int64_t key,ans;
    key = n%k;
    ans = abs(key-k);
    ans = min(key,ans);
    cout << ans << endl;
    return 0;
}