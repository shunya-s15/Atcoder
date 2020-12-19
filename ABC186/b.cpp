#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    int h,w;
    cin>>h>>w;
    vector<vector<int>> a(h,vector<int>(w));
    int key=100;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin >> a.at(i).at(j);
            key=min(key,a.at(i).at(j));
        }
    }
    int64_t ans=0;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            ans+=a.at(i).at(j)-key;
        }
    }
    cout<<ans<<endl;
    return 0;
}