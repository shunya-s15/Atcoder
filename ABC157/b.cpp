#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<vector<int>> a(3,vector<int>(3));
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> a.at(i).at(j);
        }
    }
    int n;
    cin >> n;
    vector<int> b(n);
    for(int i=0;i<n;i++){
        cin >> b.at(i);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                if(b.at(i) == a.at(j).at(k)){
                    a.at(j).at(k) = 0;
                }
            }
        }
    }
    bool bingo=false;
    for(int i=0;i<3;i++){
        if(a.at(i).at(0) == 0 && a.at(i).at(1) == 0 && a.at(i).at(2) == 0){
            bingo = true;
            break;
        }else if(a.at(0).at(i) == 0 && a.at(1).at(i) == 0 && a.at(2).at(i) == 0){
            bingo = true;
            break;
        }else if((a.at(0).at(0) == 0 && a.at(1).at(1) == 0 && a.at(2).at(2) == 0) || (a.at(0).at(2) == 0 && a.at(1).at(1) == 0 && a.at(2).at(0) == 0)){
            bingo = true;
        }
    }
    if(bingo){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}