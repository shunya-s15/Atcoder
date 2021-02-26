#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    vector<string> nobikkuri(0);
    vector<string> bikkuri(0);
    for(int i=0;i<n;i++){
        cin >> s.at(i);
        if(s.at(i).at(0) == '!'){
            bikkuri.push_back(s.at(i));
        }else{
            nobikkuri.push_back(s.at(i));
        }
    }
    for(int i=0;i<nobikkuri.size();i++){
        string nokey=nobikkuri.at(i);
        reverse(nokey.begin(),nokey.end());
        nokey+='!';
        for(int j=0;j<bikkuri.size();j++){
            string key = bikkuri.at(j);
            reverse(key.begin(),key.end());
            if(key == nokey){
                cout << nobikkuri.at(i) << endl;
                return 0;
            }
        }
    }
    cout << "satisfiable" << endl;
    return 0;
}