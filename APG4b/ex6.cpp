#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//すべての陸地マスがつながっているかを調べる
bool fill(){}
//(x,y)を埋め立てることで島になるかどうかを判断
bool judge(vector<string> &islandmap,vector<vector<bool>> &checked,int x,int y){

}

int main(){
    vector<string> islandmap(10);
    for(int i=0;i<10;i++){
        cin >> islandmap.at(i);
    }
    vector<vector<bool>> checked(10,vector<bool>(10,false));
    if(can(islandmap,checked)){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}