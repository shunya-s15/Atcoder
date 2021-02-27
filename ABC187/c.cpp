#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<string,int> s;
    for(int i=0;i<n;i++){
        string key;
        cin>>key;
        if(!s.count(key)){
            s[key]=1;
        }
    }
    for(auto p : s){
        string key=p.first;
        string bikkuri="!";
        bikkuri+=key;
        if(s.count(bikkuri)){
            cout<<key<<endl;
            return 0;
        }
    }
    cout << "satisfiable" << endl;
    return 0;
}