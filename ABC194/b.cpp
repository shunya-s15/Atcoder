#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a.at(i)>>b.at(i);
    }
    int ans=1e8;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                ans=min(ans,a.at(i)+b.at(j));
            }else{
                ans=min(ans,max(a.at(i),b.at(j)));
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}