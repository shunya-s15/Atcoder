#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a.at(i);
    }
    int64_t ans=0,key=0;
    for(int i=0;i<n;i++){
        ans += a.at(i)*a.at(i);
        key+=a.at(i);
    }
    ans*=n-1;
    for(int i=n-1;i>0;i--){
        key-=a.at(i);
        ans-=2*key*a.at(i);
    }
    cout<<ans<<endl;
    return 0;
}