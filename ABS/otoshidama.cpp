#include<iostream>
using namespace std;

int main(){
    int n,y;
    cin >> n >> y;
    int a=-1,b=-1,c=-1;
    bool flag = false;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n-i;j++){
            int k = n-i-j;
            if(10000*i+5000*j+1000*k == y){
                a = i;
                b = j;
                c = k;
                flag = true;
                break;
            }
        }
        if(flag){
            break;
        }
    }
    cout << a << " " << b << " " << c << endl;
    return 0;
}