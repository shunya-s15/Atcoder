#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> x(n);
    for(int i=0;i<n;i++){
        cin >> x.at(i);
    }
    sort(x.begin(),x.end());
    int64_t hp_min=0;
    for(int i=0;i<n;i++){
        hp_min += x.at(i)*x.at(i);
    }
    for(int i=x.at(0);i<x.at(n-1)+1;i++){
        int64_t hp_sum = 0;
        for(int j=0;j<n;j++){
            hp_sum += (x.at(j)-i)*(x.at(j)-i);
        }
        if(hp_sum < hp_min){
            hp_min = hp_sum;
        }
    }
    cout << hp_min << endl;
    return 0;
}