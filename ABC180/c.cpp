#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
    int64_t n;
    cin >> n;
    vector<int64_t> ans(0);
    int64_t sq = sqrt(n);
    //cout << sq << endl;
    for(int i=1;i<sqrt(n);i++){
        if(n%i == 0){
            ans.push_back(i);
            ans.push_back(n/i);
        }
    }
    if(n == sq*sq){
        ans.push_back(sq);
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout << ans.at(i) << endl;
    }
    return 0;
}