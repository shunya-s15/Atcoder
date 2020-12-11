#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    char alpha;
    cin >> alpha;
    if(64<alpha && alpha<91){
        cout << "A" << endl;
    }else{
        cout << "a" << endl;
    }
    //cout << alpha-1 << endl;
    return 0;
}