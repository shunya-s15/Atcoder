#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int64_t kaijou(int n){
    int64_t ans=1;
    for(int i=n;i>0;i--){
        ans*=i;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> p(n),q(n);
    for(int i=0;i<n;i++){
        cin>>p.at(i);
    }
    for(int i=0;i<n;i++){
        cin>>q.at(i);
    }
    vector<bool> flag(n,false),flag2(n,false);
    int64_t a=0,b=0;
    for(int i=0;i<n;i++){
        int key=p.at(i);
        int count=0;
        for(int j=0;j<key-1;j++){
            if(!flag.at(j)){
                count++;
            }
        }
        flag.at(key-1)=true;
        a+=count*kaijou(n-i-1);
    }
    for(int i=0;i<n;i++){
        int key=q.at(i);
        int count=0;
        for(int j=0;j<key-1;j++){
            if(!flag2.at(j)){
                count++;
            }
        }
        flag2.at(key-1)=true;
        b+=count*kaijou(n-i-1);
    }
    cout<<abs(a-b)<<endl;
    return 0;
}