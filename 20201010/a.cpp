#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    char s,t;
    cin >> s >> t;
    if(s == 'N'){
        cout << t << endl;
    }else{
        if(t == 'a'){
            cout << 'A' << endl;
        }else if(t == 'b'){
            cout << 'B' << endl;
        }else{
            cout << 'C' << endl;
        }
    }
    return 0;
}