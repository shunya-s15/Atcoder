#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int sum=0;
    vector<int> a(m);
    for(int i=0;i<m;i++){
        cin >> a.at(i);
        sum+=a.at(i);
    }
    if(sum>n){
        cout << -1 << endl;
        return 0;
    }else{
        cout << n-sum << endl;
        return 0;
    }
    return 0;
}