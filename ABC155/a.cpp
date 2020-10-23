#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    bool flag = true;
    if((a == b && b == c) ||(a != b && b != c && c != a)){
        flag = false;
    }
    if(flag){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}