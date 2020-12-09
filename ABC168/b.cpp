#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int k;
    string s;
    cin >> k >> s;
    if(s.length()>k){
        for(int i=0;i<(k-s.length());i++){
            s.pop_back();
        }
        s.push_back('.');
        s.push_back('.');
        s.push_back('.');
    }
    cout << s << endl;
    return 0;
}