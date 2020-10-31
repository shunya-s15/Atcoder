#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> buka(n,0);
    vector<int> jousi(n-1);
    for(int i=0;i<n-1;i++){
        cin >> jousi.at(i);
        buka.at(jousi.at(i)-1)++;
    }
    for(int i=0;i<n;i++){
        cout << buka.at(i) << endl;
    }
    return 0;
}