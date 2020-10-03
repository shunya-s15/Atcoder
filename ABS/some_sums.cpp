#include<iostream>
using namespace std;

int ruijou(int x, int n){
    int ans=1;
    for(int i=0;i<n;i++){
        ans *= x;
    }
    return ans;
}

int main(){
    int n,a,b;
    cin >> n >> a >> b;
    int ans=0;
    int key;
    for(int i=1;i<=n;i++){
        key = i;
        int x = 0;
        for(int j=4;j>=0;j--){
            x += key/ruijou(10,j);
            key %= ruijou(10,j);
            //cout << ruijou(10,j) << endl;
        }
        if(a<=x && x<=b){
            ans+=i;
        }
    }
    cout << ans << endl;
    return 0;
}