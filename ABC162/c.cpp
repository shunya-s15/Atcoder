#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int main(){
    int K;
    cin >> K;
    int64_t ans=0;
    for(int i=1;i<=K;i++){
        for(int j=1;j<=K;j++){
            for(int k=1;k<=K;k++){
                ans += __gcd(i,__gcd(j,k));
            }
        }
    }
    cout << ans << endl;
    return 0;
}
