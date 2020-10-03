#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    int x;
    for(int i=0;i<n;i++){
        cin >> x;
        a.at(i) = -x;
    }
    sort(a.begin(),a.end());
    int count=1;
    for(int i=1;i<n;i++){
        if(-a.at(i-1)>-a.at(i)){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}