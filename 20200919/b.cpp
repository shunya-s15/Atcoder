#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<vector<int>> daice(N,vector<int>(2));
    for(int i=0;i<N;i++){
        cin >> daice.at(i).at(0);
        cin >> daice.at(i).at(1);
    }
    int key = 0;
    for(int i=0;i<N;i++){
        if(key<3){
            if(daice.at(i).at(0) == daice.at(i).at(1)){
                key++;
            }else{
                key = 0;
            }
        }else{
            break;
        }
    }
    if(key < 3){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }
    return 0;
}