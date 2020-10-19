#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> p(n);
    for(int i=0;i<n;i++){
        cin>>p.at(i);
    }
    bool flag1=true;
    for(int i=1;i<=n;i++){
        for(int min=0;;min++){
            flag1=true;
            for(int j=0;j<i;i++){
                if(min == p.at(j)){
                    flag1=false;
                    break;
                }
            }
            if(flag1){
                cout<<min<<endl;
                break;
            }
        }
    }
    return 0;
}