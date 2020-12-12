#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(n);
    vector<pair<int,int>> cd(m);
    for(int i=0;i<n;i++){
        cin >> a.at(i);
    }
    for(int i=0;i<n;i++){
        cin >> b.at(i);
    }
    for(int i=0;i<m;i++){
        cin >> cd.at(i).first << cd.at(i).second;
    }
    
}