#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,x;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> x;
        a.at(i) = -x;
    }
    sort(a.begin(),a.end());
    int alice=0,bob=0;
    for(int i=0;i<n;i++){
        if(i%2 == 0){
            alice += a.at(i);
        }else{
            bob += a.at(i);
        }
    }
    cout << -(alice-bob) << endl;
    return 0;
}