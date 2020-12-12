#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int money=n%1000;
    if(money==0){
        cout << 0 << endl;
    }else{
        cout << 1000-money << endl;
    }
    return 0;
}