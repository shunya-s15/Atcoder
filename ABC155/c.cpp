#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    for(int i=0;i<n;i++){
        cin >> s.at(i);
    }
    sort(s.begin(),s.end());
    vector<pair<int,string>> key;
    //cout << endl;
    for(int i=0;i<n;i++){
        pair<int,string> x;
        x.second = s.at(i);
        x.first = 1;
        while(i<n-1 && x.second == s.at(i+1)){
            x.first++;
            i++;
        }
        key.push_back(x);
        //cout << key.at(key.size()-1).first << " " << key.at(key.size()-1).second << endl;
    }
    sort(key.begin(),key.end());
    int y = key.at(key.size()-1).first;
    //cout << endl;
    for(int i=0;i<key.size();i++){
        if(key.at(i).first == y){
            cout << key.at(i).second << endl;
        }
    }
    return 0;
}