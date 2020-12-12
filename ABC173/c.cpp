#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int h,w,k;
    cin>>h>>w>>k;
    vector<vector<char>> boad(h,vector<char>(w));
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>boad.at(i).at(j);
        }
    }
    int ans=0;
    for(int bith=0;bith<(1<<h);bith++){
        vector<vector<char>> copy=boad;
        for(int bitw=0;bitw<(1<<w);bitw++){
            for(int i=0;i<h;i++){
                if(bith&(1<<i)){
                    for(int x=0;x<w;x++){
                        copy.at(i).at(x)='r';
                    }
                }
            }
            for(int j=0;j<w;j++){
                if(bitw&(1<<j)){
                    for(int y=0;y<h;y++){
                        copy.at(y).at(j)='r';
                    }
                }
            }
            int count=0;
            for(int m=0;m<h;m++){
                for(int o=0;o<w;o++){
                    if(copy.at(m).at(o) == '#'){
                        count++;
                    }
                }
            }
            if(count==k){
                ans++;
            }
            copy=boad;
        }
    }
    cout << ans << endl;
    return 0;
}