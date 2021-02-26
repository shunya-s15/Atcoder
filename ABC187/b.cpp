#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> xy(n);
    for(int i=0;i<n;i++){
        cin >> xy.at(i).first >> xy.at(i).second;
    }
    int ans=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int bunsi=xy.at(i).second-xy.at(j).second;
            int bunbo=xy.at(i).first-xy.at(j).first;
            if(bunbo>0){
                if(-bunbo<=bunsi && bunsi<=bunbo){
                    ans++;
                }
            }else{
                if(bunbo<=bunsi && bunsi<=-bunbo){
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}