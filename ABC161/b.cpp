#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a.at(i);
    }
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    int sum=0;
    for(int i=0;i<n;i++){
        sum += a.at(i);
    }
    if(a.at(m-1)*4*m < sum){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }
    return 0;
}