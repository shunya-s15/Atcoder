#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void fill_island(vector<string> bord,vector<vector<bool>> &checked,int x,int y){
    if(x<0||x>=10||y<0||y>=10){
        return;
    }else if(bord.at(y).at(x) == 'x'){
        return;
    }else if(checked.at(y).at(x)){
        return;
    }else{
        checked.at(y).at(x) = true;
        fill_island(bord,checked,x-1,y);
        fill_island(bord,checked,x+1,y);
        fill_island(bord,checked,x,y-1);
        fill_island(bord,checked,x,y+1);
    }
}

bool research(vector<string> bord,int x,int y){
    bord.at(y).at(x) = 'o';
    vector<vector<bool>> checked(10,vector<bool>(10,false));
    fill_island(bord,checked,x,y);
    bool ok = true;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(bord.at(i).at(j) == 'o'){
                if(!checked.at(i).at(j)){
                    ok = false;
                }
            }
        }
    }
    return ok;
}

int main(){
    vector<string> bord(10);
    for(int i=0;i<10;i++){
        cin >> bord.at(i);
    }
    bool key = false;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(research(bord,i,j)){
                key = true;
                break;
            }
        }
        if(key){
            break;
        }
    }
    if(key){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    
    return 0;
}