#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a.at(i);
    }
    int64_t ans=0;
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    int key=(n+1)/2;
    vector<int> harf(key);
    harf.at(0)=a.at(0);
    for(int i=1;i<key;i++){
        harf.at(i)=a.at(i);
        ans+=harf.at(i-1);
    }
    int j=1;
    for(int i=key;i<n;i++){
        if(i==n-1){
            ans+=harf.at(key-1);
        }else{
            ans+=harf.at(j);
        }
        j++;
    }
    cout << ans << endl;
    return 0;
}