#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> p(n);
    for(int i=0;i<n;i++){
        cin >> p.at(i);
    }
    sort(p.begin(),p.end());
    int ans=0;
    for(int i=0;i<k;i++){
        ans+=p.at(i);
    }
    cout << ans << endl;
    return 0;
}