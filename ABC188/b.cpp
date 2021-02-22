#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++){
        cin>>a.at(i);
    }
    for(int i=0;i<n;i++){
        cin>>b.at(i);
    }
    int64_t ans=0;
    for(int i=0;i<n;i++){
        ans += a.at(i)*b.at(i);
    }
    if(ans==0){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}