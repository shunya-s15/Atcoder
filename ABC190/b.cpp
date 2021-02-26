#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,s,d;
    cin>>n>>s>>d;
    vector<int> x(n);
    vector<int> y(n);
    for(int i=0;i<n;i++){
        cin>>x.at(i)>>y.at(i);
    }
    for(int i=0;i<n;i++){
        if(x.at(i)<s&&y.at(i)>d){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    return 0;
}