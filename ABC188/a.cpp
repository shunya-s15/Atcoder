#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    if(x-y>=3 || x-y<=-3){
        cout<<"No"<<endl;
    }else{
        cout<<"Yes"<<endl;
    }
    return 0;
}