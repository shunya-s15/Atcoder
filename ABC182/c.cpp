#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    string n;
    cin >> n;
    int ans=10000;
    for(int bit=0;bit<(1<<n.size());bit++){
        int count=n.size();
        int sum=0;
        for(int i=0;i<n.size();i++){
            if(bit & (1<<i)){
                sum+=n.at(i);
                count--;
            }
        }
        if(sum%3==0 && count<n.size()){
            ans=min(ans,count);
        }
    }
    if(ans==10000){
        cout<<-1<<endl;
    }else{
        cout<<ans<<endl;
    }
    return 0;
}