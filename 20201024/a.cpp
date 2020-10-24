#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int64_t njou(int x,int n){
    int64_t ans = 1;
    for(int64_t i=0;i<n;i++){
        ans *= x;
    }
    return ans;
}

int main(){
    int64_t n;
    cin >> n;
    int64_t a,b;
    bool flag = false;
    
    for(int i=1;i<38;i++){
        int64_t key = njou(3,i);
        //cout << "key:" << key << endl;
        for(int j=1;j<27;j++){
            //cout << "5:" << njou(5,j) << endl;
            int64_t key2 = njou(5,j);
            if(key+key2 == n){
                a = i;
                b = j;
                flag=true;
                break;
            }
        }
        //cout << endl;
        if(flag){
            break;
        }
    }
    //cout <<"n:"<<n<<endl;
    if(flag){
        cout << a << " " << b << endl;
    }else{
        cout << -1 << endl;
    }
    return 0;
}