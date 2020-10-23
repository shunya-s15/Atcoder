#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a.at(i);
    }
    bool flag=true;
    for(int i=0;i<n;i++){
        if(a.at(i)%2==0){
            if(a.at(i)%3>0 && a.at(i)%5>0){
                flag=false;
                break;
            }
        }
    }
    if(flag){
        cout << "APPROVED" << endl;
    }else{
        cout << "DENIED" << endl;
    }
    return 0;
}