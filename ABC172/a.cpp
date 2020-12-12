#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    int a;
    cin >> a;
    int ans = a+pow(a,2)+pow(a,3);
    cout << ans << endl;
    return 0;
}