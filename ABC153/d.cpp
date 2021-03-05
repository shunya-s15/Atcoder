#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    int64_t h;
    cin>>h;
    int64_t count=0;
    while(h>1){
        h/=2;
        count++;
    }
    int64_t ans=pow(2,count+1)-1;
    cout<<ans<<endl;
    return 0;
}