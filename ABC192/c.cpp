#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int ans=n;
    for(int i=0;i<k;i++){
        string s=to_string(ans);
        sort(s.begin(),s.end());
        int g1,g2;
        g2=stoi(s);
        reverse(s.begin(),s.end());
        g1=stoi(s);
        ans=g1-g2;
    }
    cout<<ans<<endl;
    return 0;
}