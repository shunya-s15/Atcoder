#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int njou(int x, int n){
    int ans=1;
    for(int i=0;i<n;i++){
        ans*=x;
    }
    return ans;
}

int main(){
    int n,k;
    cin >> n >> k;
    int i=0;
    while(n>=njou(k,i)){
        i++;
    }
    cout << i << endl;
    return 0;
}