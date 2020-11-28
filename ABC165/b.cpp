#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int64_t x;
    cin >> x;
    int64_t saving = 100;
    int64_t year = 0;
    while(saving < x){
        saving += saving/100;
        year++;
    }
    cout << year << endl;
    return 0;
}