#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string s,t;
    cin >> s >> t;
    string ans = "Yes";
    if(s.length()+1!=t.length()){
        ans = "No";
    }
    for(int i=0;i<s.length();i++){
        if(s.at(i) != t.at(i)){
            ans="No";
        }
    }
    cout << ans << endl;
    return 0;
}