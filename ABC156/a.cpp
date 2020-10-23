#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,r;
    cin >> n >> r;
    int ans = r;
    if(n<10){
        ans = r+100*(10-n);
    }
    cout << ans << endl;
    return 0;
}