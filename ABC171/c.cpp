#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    int64_t n;
    cin>>n;
    int i=0;
    string ans="";
    int64_t key=0;
    while(key<n){
        i++;
        key+=pow(26,i);
    }
    int64_t m=n-26*(pow(26,i-1)-1)/25-1;
    for(int j=i;j>0;j--){
        int64_t k=m/pow(26,j-1);
        ans+=char(97+k);
        m-=pow(26,j-1)*k;
    }
    cout<<ans<<endl;
    return 0;
}