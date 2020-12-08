#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int a,b,c,k;
    cin>>a>>b>>c>>k;
    int64_t ans=0;
    if(a>k){
        ans+=k;
    }else{
        ans+=a;
        k=k-a;
    }
    if(b<k){
        k=k-b;
    }else{
        k=0;
    }
    if(k>0){
        ans-=k;
    }
    cout << ans << endl;
    return 0;
}