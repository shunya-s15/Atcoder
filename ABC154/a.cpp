#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string s,t,u;
    int a,b;
    cin >> s >> t;
    cin >> a >> b;
    cin >> u;
    if(u == s){
        a--;
    }else{
        b--;
    }
    cout << a << " " << b << endl;
    return 0;
}