#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    int64_t x,k,d;
    cin>>x>>k>>d;
    x=abs(x);
    int64_t min;
    if(k<=(x+(d-1))/d){
        min=abs(x-k*d);
    }else{
        int64_t nx=x%d;
        int64_t nk=k-(x/d);
        if(nk%2==0){
            min=nx;
        }else{
            min=abs(nx-d);
        }
    }
    cout<<min<<endl;
    return 0;
}