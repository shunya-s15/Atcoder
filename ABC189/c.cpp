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
    int ans=0;
    for(int l=0;l<n;l++){
        int x=a.at(l);
        for(int r=l;r<n;r++){
            x=min(x,a.at(r));
            ans=max(ans,x*(r-l+1));
        }
    }
    cout << ans << endl;
    //cout<<*min_element(a.begin()+1,a.begin()+3)<<endl;
    //cout<<*max_element(a.begin()+1,a.begin()+3)<<endl;
    return 0;
}