#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int ans = -1;
    for(int i=1;i<=1250;i++){
        int ai = i*0.08,bi = i*0.1;
        if(ai == a && bi == b){
            ans = i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}