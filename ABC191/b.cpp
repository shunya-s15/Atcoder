#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a.at(i);
    }
    for(int i=0;i<n;i++){
        if(a.at(i)!=x){
            cout<<a.at(i)<<" ";
        }
    }
    cout<<endl;
    return 0;
}