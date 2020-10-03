#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    for(int i=0;i<s.size()-2;i++){
        if(s.at(i) == 'A'&&s.at(i+1) == 'B' && s.at(i+2) == 'C'){
            count++;
            i += 2;
        }
    }
    cout << count << endl;
    return 0;
}