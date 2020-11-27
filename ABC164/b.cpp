#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int takahasi = c/b;
    int aoki = a/d;
    if(a%d>0){
        aoki++;
    }
    if(c%b>0){
        takahasi++;
    }
    if(aoki<takahasi){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }
    return 0;
}