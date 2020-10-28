#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    if(s.at(2) == s.at(3) && s.at(4) == s.at(5)){
        cout << "Yes" << endl;
        return 0;
    }else{
        cout << "No" << endl;
    }
    return 0;
}