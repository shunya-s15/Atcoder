#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> h(n);
    for(int i=0;i<n;i++){
        cin >> h.at(i);
    }
    sort(h.begin(),h.end());
    if(n>=k){
        for(int i=0;i<k;i++){
            h.at(n-i-1) = 0;
        }
    }else{
        for(int i=0;i<n;i++){
            h.at(i) = 0;
        }
    }
    int64_t ans=0;
    for(int i=0;i<n;i++){
        ans += h.at(i);
    }
    cout << ans << endl;
    return 0;
}