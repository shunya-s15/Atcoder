#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int64_t A,B,C,D;
    cin >> A >> B >> C >> D;
    /*if((A<=C && C<=B) || (A<=D && D<=B) || (C<=A && B<=D)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }*/
    if(D<A || B<C){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }
    return 0;
}