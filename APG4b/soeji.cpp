#include<iostream>
using namespace std;

int main(){
    string str;
    int i;
    cin >> str >> i;
    cout << str.at(i-1) << endl;
    return 0;
}