#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int x;
    vector<vector<int>> a(k,vector<int>(0));
    vector<int> d(k);
    for(int i=0;i<k;i++){
        cin >> d.at(i);
        for(int j=0;j<d.at(i);j++){
            cin >> x;
            a.at(i).push_back(x);
        }
    }
    vector<bool> flag(n,false);
    for(int i=0;i<k;i++){
        for(int j=0;j<d.at(i);j++){
            flag.at(a.at(i).at(j)-1) = true;
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(!flag.at(i)){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}