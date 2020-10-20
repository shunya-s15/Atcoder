#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int h,a;
    cin >> h >> a;
    int ans = h/a;
    if(h%a > 0){
        ans++;
    }
    cout << ans << endl;
    return 0;
}