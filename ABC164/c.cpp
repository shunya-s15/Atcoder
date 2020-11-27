#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    map<string,int> key;
    for(int i=0;i<n;i++){
        cin >> s.at(i);
    }
    for(int i=0;i<n;i++){
        key[s.at(i)];
    }
    cout << key.size() << endl;
    return 0;
}