#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    string ans = "";
    for(int i=0;i<s.length();i++){
        ans += 'x';
    }
    cout << ans << endl;
    return 0;
}