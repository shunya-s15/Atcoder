#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int64_t a,b;
    int64_t ans=0;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        ans += (a+b)*(b-a+1)/2;
    }
    cout<<ans<<endl;
    return 0;
}