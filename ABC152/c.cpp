#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> p(n);
    for(int i=0;i<n;i++){
        cin >> p.at(i);
    }
    int count = 0;
    int min = p.at(0);
    for(int i=0;i<n;i++){
        if(p.at(i)<=min){
            count++;
            min = p.at(i);
        }
    }
    /*for(int i=0;i<n;i++){
        bool flag = true;
        for(int j=0;j<i;j++){
            if(p.at(i) > p.at(j)){
                flag = false;
                break;
            }
        }
        if(flag){
            count++;
        }
    }*/

    cout << count << endl;
    return 0;
}