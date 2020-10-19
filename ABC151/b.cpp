#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,k,m;
    cin >> n >> k >> m;
    vector<int> a(n,0);
    int sum=0;
    for(int i=0;i<n-1;i++){
        cin >> a.at(i);
        sum += a.at(i);
    }
    int key = m*n-sum;
    if(key > k){
        cout << -1 << endl;
    }else if(key < 0){
        cout << 0 << endl;
    }else{
        cout << key << endl;
    }
    return 0;
}