#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int64_t a;
    double b;
    cin >> a >> b;
    int64_t bb=b*100+0.5;
    int64_t ans=(a*bb)/100;
    cout<<ans<<endl;
    return 0;
}