#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a.at(i);
    }
    /*int ans = 1e9,key,count;
    for(int i=0;i<n;i++){
        count = 0;
        key = a.at(i);
        while(key%2 == 0){
            key /= 2;
            count++;
        }
        if(ans>count){
            ans = count;
        }
    }*/
    int ans=0;
    bool flag = true;
    while(1){
        for(int i:a){
            if(i%2 != 0){
                flag = false;
                break;
            }
        }
        if(flag == true){
            for(int j=0;j<n;j++){
                a.at(j) /= 2;
            }
            ans++;
        }else{
            break;
        }
    }
    cout << ans << endl;
    return 0;
}