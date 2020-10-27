#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;

int main(){
    double l;
    cin >> l;
    cout << setprecision(100) << (l*l*l)/27 << endl;
    return 0;
}