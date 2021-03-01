#include<iostream>
#include<algorithm>
#include<vector>
#include<iomanip>
using namespace std;

int main(){
    double a,b;
    cin>>a>>b;
    double ans=(a-b)*100/a;
    cout<<fixed<<setprecision(10)<<ans<<endl;
    return 0;
}