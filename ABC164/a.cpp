#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int s,w;
    cin >> s >> w;
    if(s>w){
        cout << "safe" << endl;
    }else{
        cout << "unsafe" << endl;
    }
    return 0;
}