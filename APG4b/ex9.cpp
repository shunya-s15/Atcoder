#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main(){
    int N;
    cin>>N;
    vector<int> A(N);
    for(int i=0;i<N;i++){
        cin >> A.at(i);
    }
    map<int,int> B;
    for(int i:A){
        if(B.count(i)){
            B.at(i)++;
        }else{
            B[i] = 1;
        }
    }

    int max=0;
    int saihinti=0;
    for(int i:A){
        if(saihinti<B.at(i)){
            saihinti = B.at(i);
            max = i;
        }
    }
    cout << max << " " << saihinti << endl;
    return 0;
}