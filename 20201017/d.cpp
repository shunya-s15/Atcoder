#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
    int64_t x,y,a,b;
    cin >> x >> y >> a >> b;
    pair<int64_t,int64_t> takahasi(x,0);
    while(takahasi.first < y){
        if(takahasi.first < b/(a-1)){ //takahasi.first*(a-1)がオーバフローしちゃうのでどうにかしたい->解決
            takahasi.first *= a;
            takahasi.second++;
        }else{
            if((y-takahasi.first)%b == 0){
                takahasi.second += (y-takahasi.first)/b;
                break;
            }else{
                takahasi.second += (y-takahasi.first)/b;
                takahasi.second++;
                break;
            }

        }
        
    }
    cout << takahasi.second-1 << endl;
    return 0;
}