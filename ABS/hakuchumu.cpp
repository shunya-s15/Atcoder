#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    string compare = "";
    vector<string> add(4);
    add.at(0) = "dream";
    add.at(1) = "dreamer";
    add.at(2) = "erase";
    add.at(3) = "eraser";
    for(int i=s.size()-1;i>=0;i--){
        if(s.at(i) == 'r' && s.at(i-)){
            if(s.at(i-2) == 'm' && s.at(i-3))
        }else if(s.at(i) == 'e'){

        }
    }
}