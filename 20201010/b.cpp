#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    vector<string> s(h);
    for(int i=0;i<h;i++){
        cin >> s.at(i);
    }
    int count=0;
    for(int i=0;i<h;i++){
        for(int j=0;j<w-1;j++){
            if(s.at(i).at(j) == '.' && s.at(i).at(j+1) == '.'){
                count++;
            }
        }
    }
    for(int i=0;i<w;i++){
        for(int j=0;j<h-1;j++){
            if(s.at(j).at(i) == '.' && s.at(j+1).at(i) == '.'){
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}