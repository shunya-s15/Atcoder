#include <iostream>
using namespace std;

/*int main(){
    int n,count=0;
    cin >> n;
    for(int i=0;i<3;i++){
        if(n & (1<<i)){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}*/

int ryuijou(int x,int n){
    int ans = 1;
    for(int i=0;i<n;i++){
        ans *= x;
    }
    return ans;
}

int main(){
    int n,key,count=0;
    cin >> n;
    for(int i=2;i>=0;i--){
        key = n/ryuijou(10,i);
        if(key == 1){
            count++;
        }
        n %= ryuijou(10,i);
    }
    cout << count << endl;
    return 0;
}