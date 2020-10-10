#include<iostream>
#include<vector>
#include<tuple>
//#include<algorithm>
using namespace std;

/*bool correct_move(int x,int y){
    if(x<0 || y<0){
        return false;
    }else{
        return true;
    }
}

bool move(int second,int x,int y,int g_x,int g_y){
    if(x == g_x && y == g_y && second == 0){
        return true;
    }else if(second>0){
        bool result = false;
        if(correct_move(x+1,y) && move(second-1,x+1,y,g_x,g_y)){
            result = true;
        }else if(correct_move(x-1,y) && move(second-1,x-1,y,g_x,g_y)){
            result = true;
        }else if(correct_move(x,y+1) && move(second-1,x,y+1,g_x,g_y)){
            result = true;
        }else if(correct_move(x,y-1) && move(second-1,x,y-1,g_x,g_y)){
            result = true;
        }
        return result;
    }else{
        return false;
    }
}*/
int zettaiti(int x){
    if(x>0){
        return x;
    }else{
        return -x;
    }
}

int main(){
    int n;
    cin >> n;
    vector<tuple<int,int,int>> goal(n);
    for(int i=0;i<n;i++){
        cin >> get<0>(goal.at(i)) >> get<1>(goal.at(i)) >> get<2>(goal.at(i));
    }
    /*bool ans = move(get<0>(goal.at(0)),0,0,get<1>(goal.at(0)),get<2>(goal.at(0)));
    for(int i=1;i<n;i++){
        ans = move(get<0>(goal.at(i))-get<0>(goal.at(i-1)),get<1>(goal.at(i-1)),get<2>(goal.at(i-1)),get<1>(goal.at(i)),get<2>(goal.at(i)));
        if(!ans){
            break;
        }
    }
    if(ans){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }*/
    int x=0,y=0,t=0;
    bool ans=true;
    for(int i=0;i<n;i++){
        int x_g = zettaiti(get<1>(goal.at(i)) - x);
        int y_g = zettaiti(get<2>(goal.at(i)) - y);
        int t_g = get<0>(goal.at(i)) - t;
        x = get<1>(goal.at(i));
        y = get<2>(goal.at(i));
        t = get<0>(goal.at(i));
        if((t_g-(x_g+y_g)) < 0){
            ans = false;
            break;
        }else if((t_g-(x_g+y_g))%2 == 1){
            ans = false;
            break;
        }
    }
    if(ans){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}