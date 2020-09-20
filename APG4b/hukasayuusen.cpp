#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool correct_move(vector<string> &bord,vector<vector<bool>> &checked,int x,int y){
    if(x<0||x>=bord.at(0).size()||y<0||y>=bord.size()){
        return false;
    }else if(bord.at(y).at(x) == '#'){
        return false;
    }else if(checked.at(y).at(x)){
        return false;
    }else{
        return true;
    }
}

bool research(vector<string> &bord,vector<vector<bool>> &checked,int x,int y,int g_x,int g_y){
    if(x == g_x && y == g_y){
        return true;
    }else{
        checked.at(y).at(x) = true;
        bool result = false;
        if(correct_move(bord,checked,x+1,y) && research(bord,checked,x+1,y,g_x,g_y)){
            result = true;
        }
        if(correct_move(bord,checked,x-1,y) && research(bord,checked,x-1,y,g_x,g_y)){
            result = true;
        }
        if(correct_move(bord,checked,x,y+1) && research(bord,checked,x,y+1,g_x,g_y)){
            result = true;
        }
        if(correct_move(bord,checked,x,y-1) && research(bord,checked,x,y-1,g_x,g_y)){
            result = true;
        }
        return result;
    }
}

int main(){
    int H,W;
    cin >> H >> W;
    vector<string> bord(H);
    for(int i=0;i<H;i++){
        cin >> bord.at(i);
    }
    vector<vector<bool>> checked(H,vector<bool>(W,false));
    int i,j,s_x,s_y,g_x,g_y;
    for(i=0;i<H;i++){
        for(j=0;j<W;j++){
            if(bord.at(i).at(j) == 's'){
                s_x=j;
                s_y=i;
            }else if(bord.at(i).at(j) == 'g'){
                g_x=j;
                g_y=i;
            }
        }
    }
    if(research(bord,checked,s_x,s_y,g_x,g_y)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}