#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = n/2;
    if(n%2==1){
        ans++;
    }
    cout << ans << endl;
    return 0;
}