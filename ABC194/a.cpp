#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int nyuuko=a+b;
    if(nyuuko>=15&&b>=8){
        cout<<1<<endl;
    }else if(nyuuko>=10&&b>=3){
        cout<<2<<endl;
    }else if(nyuuko>=3){
        cout<<3<<endl;
    }else{
        cout<<4<<endl;
    }
    return 0;
}