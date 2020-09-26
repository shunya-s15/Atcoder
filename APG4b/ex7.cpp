#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int N;
    cin>>N;
    vector<pair<int,int>> a(N);
    for(int i=0;i<N;i++){
        cin>>a.at(i).first>>a.at(i).second;
    }
    for(int i = 0;i<N;i++){
        for(int j = 0;j<N-1-i;j++){
            if(a.at(j).second>a.at(j+1).second){
                pair<int,int> swap = a.at(j);
                a.at(j) = a.at(j+1);
                a.at(j+1) = swap;
            }
        }
    }
    for(int i=0;i<N;i++){
        cout << a.at(i).first << " " << a.at(i).second << endl;
    }
    return 0;
}