#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int64_t h,n;
    cin >> h >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a.at(i);
    }
    int64_t asum=0;
    for(int i=0;i<n;i++){
        asum += a.at(i);
    }
    if(asum < h){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }
    return 0;
}