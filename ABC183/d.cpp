#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
const int tmax=200005;

int main(){
    int n,w;
    cin>>n>>w;
    //いもす法
    vector<int64_t> cum(tmax,0);
    for(int i=0;i<n;i++){
        int s,t,p;
        cin>>s>>t>>p;
        cum.at(s)+=p;
        cum.at(t)-=p;
    }
    for(int i=0;i<tmax-1;i++){
        cum.at(i+1)+=cum.at(i);
        if(cum.at(i)>w){
            cout<<"No"<<endl;
            return 0;
        }
    }
    /*vector<pair<int,int>> key;
    for(int i=0;i<n;i++){
        int s,t,p;
        cin>>s>>t>>p;
        pair<int,int> x;
        x.first=s;
        x.second=p;
        key.push_back(x);
        x.first=t;
        x.second=-p;
        key.push_back(x);
    }
    sort(key.begin(),key.end());
    int64_t need_water=0;
    for(auto p:key){
        need_water+=p.second;
        if(need_water>w){
            cout<<"No"<<endl;
            return 0;
        }
    }*/
    cout<<"Yes"<<endl;    
    return 0;
}