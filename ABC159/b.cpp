#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool kaibun(string s){
    int n = s.size();
    string s_front = "",s_rear = "";
    bool flag = true;
    if(n%2 == 1){
        for(int i=0;i<(n-1)/2;i++){
            s_front += s.at(i);
        }
        for(int i=n-1;i>(n-1)/2;i--){
            s_rear += s.at(i);
        }
    }else{
        for(int i=0;i<n/2;i++){
            s_front += s.at(i);
        }
        for(int i=n-1;i>=n/2;i--){
            s_rear += s.at(i);
        }
    }
    
    if(s_front != s_rear){
        flag = false;
    }
    return flag;
}

int main(){
    string s;
    cin >> s;
    string s_front = "",s_rear = "";
    int n = s.size();
    for(int i=0;i<(n-1)/2;i++){
        s_front += s.at(i);
    }
    for(int i=n-1;i>(n-1)/2;i--){
        s_rear += s.at(i);
    }
    if(kaibun(s) && kaibun(s_front) && kaibun(s_rear)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}