#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    string compare[4];
    compare[0] = "dream";
    compare[1] = "dreamer";
    compare[2] = "erase";
    compare[3] = "eraser";
    bool flag1 = true,flag2 = false,flag3 = true;
    for(int i=s.size()-1;i>=0;){
        flag2 = false;
        for(int j=0;j<4;j++){
            flag1 = true;
            for(int k=compare[j].size()-1;k>=0;k--){
                if(s.at(i-(compare[j].size()-k-1)) != compare[j].at(k)){
                    flag1 = false;
                    break;
                }
            }
            if(flag1){
                i -= compare[j].size();
                flag2 = true;
                break;
            }
        }
        if(!flag2){
            flag3=false;
            break;
        }
    }
    if(flag3){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}