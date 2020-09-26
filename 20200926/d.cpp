#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int N,K;
    cin >> N >> K;
    vector<int> A(N);
    for(int i=0;i<N;i++){
        cin >> A.at(i);
    }
    int max = 0;
    int count = 1;
    int B = A.at(0);
    for(int i=0;i<N;i++){
        if(N-i<=max){
            break;
        }
        int count = 1;
        int B = A.at(i);
        for(int j=i+1;j<N;j++){
            int key = B-A.at(j);
            if(-K <= key && key <= K){
                count++;
                B = A.at(j);
            }
        }
        if(max < count){
            max = count;
        }
    }
    cout << max << endl;
    return 0;
}