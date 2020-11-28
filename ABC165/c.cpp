#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n,m,q;
vector<vector<int>> abcd(50,vector<int>(4));
int maxpoint=0;

void dfs(vector<int> A){
    if(A.size() == n+1){
        int point=0;
        for(int i=0;i<q;i++){
            if(A.at(abcd.at(i).at(1))-A.at(abcd.at(i).at(0)) == abcd.at(i).at(2)){
                point += abcd.at(i).at(3);
            }
        }
        maxpoint = max(maxpoint,point);
        return;
    }
    A.push_back(A.back());
    while(A.back()<=m){
        dfs(A);
        A.back()++;
    }
    return;
}

int main(){
    cin>>n>>m>>q;
    for(int i=0;i<q;i++){
        cin>>abcd.at(i).at(0)>>abcd.at(i).at(1)>>abcd.at(i).at(2)>>abcd.at(i).at(3);
    }
    dfs(vector<int> (1,1));
    cout << maxpoint << endl;
    return 0;
}