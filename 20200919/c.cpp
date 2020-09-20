#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;
    //cout << "N:" << N << endl;
    int c;
    int count = 0;
    for(c=N-1;c>0;c--){
        //cout << "for" << endl;
        int j = 1;
        int yakusu = 0;
        while(j*j<=N-c){
            //cout << "while" << endl;
            if((N-c)%j == 0){
                yakusu++;
                if((N-c)/j != j){
                    yakusu++;
                }
            }
            j++;
        }
        count += yakusu;
    }
    cout << count << endl;
    return 0;
}