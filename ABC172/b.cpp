#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string s,t;
    cin >> s >> t;
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s.at(i) != t.at(i)){
            count++;
        }
    }
    cout << count <<endl;
    return 0;
}