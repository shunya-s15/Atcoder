#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    vector<pair<int,int>> vp(n);
    for(int i=0;i<n;i++){
        cin>>vp.at(i).first>>vp.at(i).second;
    }
    int alco=0;
    x*=100;
    for(int i=0;i<n;i++){
        alco+=vp.at(i).first*vp.at(i).second;
        if(x<alco){
            cout<<i+1<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}