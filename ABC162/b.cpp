#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int64_t ans=0;
    for(int i=1;i<=n;i++){
        if(i%3==0 || i%5==0){
            continue;
        }else{
            ans+=i;
        }
    }
    cout << ans << endl;
    return 0;
}