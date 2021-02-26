#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string a,b;
    cin >> a >> b;
    int anum=0,bnum=0;
    for(int i=0;i<3;i++){
        anum+=int(a.at(i))-48;
        bnum+=int(b.at(i))-48;
        //cout << anum <<endl;
        //cout<<bnum<<endl;
    }
    cout<<max(anum,bnum)<<endl;
    return 0;
}