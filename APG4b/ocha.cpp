#include <iostream>
using namespace std;

int main(){
    string str;
    cin >> str;
    if(str.at(str.size() -1) == 'T'){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}