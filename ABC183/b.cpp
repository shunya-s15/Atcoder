#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
    double sx,sy,gx,gy;
    cin>>sx>>sy>>gx>>gy;
    double ansx=(gx*sy+sx*gy)/(sy+gy);
    cout<<setprecision(15)<<ansx<<endl;
    return 0;
}