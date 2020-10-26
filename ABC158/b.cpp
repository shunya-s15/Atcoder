#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int64_t n,a,b;
    cin >> n >> a >> b;
    int64_t sum = a+b;
    int64_t ans = a*(n/sum);
    if(n%sum != 0){
        if(n%sum > a){
            ans += a;
        }else{
            ans += n%sum;
        }
    }
    cout << ans << endl;
    return 0;
}