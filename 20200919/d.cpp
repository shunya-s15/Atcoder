#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
const int mod = 998244353;

int main(){
    int N,K;
    cin >> N >> K;
    vector<vector<int>> kukan(K,vector<int>(2));
    for(int i=0;i<K;i++){
        cin >> kukan.at(i).at(0) >> kukan.at(i).at(0);
    }
    vector<int> S(0);
    for(int i=0;i<K;i++){
        for(int j=kukan.at(i).at(0);j<=kukan.at(i).at(1);j++){
            S.push_back(j);
        }
    }
    sort(S.begin(),S.end());
    long long count = 0;

    return 0;
}