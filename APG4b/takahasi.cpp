#include <iostream>
using namespace std;
int main(){
    string str,str2;
    cin >> str >> str2;
    if(str.size() > str2.size()){
        cout << str << endl;
    }else{
        cout << str2 << endl;
    }
    return 0;
}