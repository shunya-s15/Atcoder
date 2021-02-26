#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int l;
    cin >> l;
    int64_t ans=l-1;
    int key=l-1;
    for(int i=1;i<11;i++){
        //cout<<"ans:"<<ans<<endl;
        ans*=key-1;
        ans/=i+1;
        key--;
    }
    cout << ans << endl;
    return 0;
}