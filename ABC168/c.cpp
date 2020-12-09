#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
    double a,b,h,m;
    cin>>a>>b>>h>>m;
    const double pi=3.14159265358979323;
    double hw=(h+m/60)/6*pi;
    double mw=m/30*pi;
    //cout << setprecision(15)<< hw << endl;
    //cout << setprecision(15)<< mw <<endl;
    //cout << setprecision(15)<< hw-mw << endl;
    //cout<<setprecision(15)<<cos(hw-mw)<<endl;
    double ans=sqrt(a*a+b*b-2*a*b*cos(hw-mw));
    cout<<setprecision(15)<<ans<<endl;
    return 0;
}