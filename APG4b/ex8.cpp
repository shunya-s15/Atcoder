#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int N;
    cin>>N;
    vector<pair<pair<string,int>,int>> restaurant(N);
    string s;
    int a;
    for(int i=0;i<N;i++){
        cin>>s>>a;
        restaurant.at(i).first = make_pair(s,a*(-1));
        restaurant.at(i).second = i+1;
    }
    sort(restaurant.begin(),restaurant.end());
    for(int i=0;i<N;i++){
        cout<<restaurant.at(i).second<<endl;
    }
    return 0;
}