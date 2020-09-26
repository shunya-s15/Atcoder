#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int N,M;
    cin >> N >> M;
    vector<pair<int,int>> city(M);
    for(int i=0;i<M;i++){
        cin >> city.at(i).first >> city.at(i).second;
    }
    int ans = N-1-M;
    cout << ans << endl;
    return 0;
}