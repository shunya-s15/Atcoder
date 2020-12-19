#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int64_t> a(n);
    int64_t sum=0;
    int64_t ans=0;
    for(int i=0;i<n;i++){
        cin >> a.at(i);
        sum+=a.at(i);
    }
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    for(int i=0;i<n-1;i++){
        sum-=a.at(i);
        ans += a.at(i)*(n-(i+1))-sum;
    }
    cout << ans << endl;
    return 0;
}