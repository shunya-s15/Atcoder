#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,x;
    cin >> n >> x;
    if(500*n >= x){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}