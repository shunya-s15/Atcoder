#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int ans,odd,even;
    even = (n*(n-1))/2;
    odd = (m*(m-1))/2;
    ans = even+odd;
    cout << ans << endl;
    return 0;
}