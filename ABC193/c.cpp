#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    int64_t n;
    cin>>n;
    int key=sqrt(n);
    int ans=0;
    vector<bool> count(key+1,true);
    for(int i=2;i<=key;i++){
        int j=2;
        if(count.at(i)){
            while(pow(i,j)<=n){//pow(2,4)とpow(4,2)が重複しちゃう<-kaiketu
                if(pow(i,j)<=key){
                    count.at(pow(i,j))=false;
                }
                ans++;
                j++;
            }
        }
    }
    cout<<n-ans<<endl;
    return 0;
}