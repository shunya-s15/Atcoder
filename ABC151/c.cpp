#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int64_t n,m;
    cin >> n >> m;
    vector<pair<int64_t,string>> answer(m);
    for(int64_t i=0;i<m;i++){
        cin >> answer.at(i).first >> answer.at(i).second;
    }
    vector<int> AC(n,0);
    vector<int> WA(n,0);
    for(int64_t i=0;i<m;i++){
        if(answer.at(i).second == "WA" && AC.at(answer.at(i).first-1) == 0){
            WA.at(answer.at(i).first-1)++;
        }else if(answer.at(i).second == "AC" && AC.at(answer.at(i).first-1) == 0){
            AC.at(answer.at(i).first-1)++;
        }
    }
    int64_t account=0,wacount=0;
    for(int64_t i=0;i<n;i++){
        account += AC.at(i);
        if(AC.at(i)>0){
            wacount += WA.at(i);
        }
    }
    cout << account << " " << wacount << endl;
    return 0;
}