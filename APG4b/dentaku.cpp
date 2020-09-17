#include <iostream>
using namespace std;
 
int main() {
  int N, A;
  cin >> N >> A;
  int ans = A;
  //string s;
  //int x;
  int i;
  for(i = 0;i<N;i++){
        string s;
        int x;
        cin >> s >> x;
        if(s == "+"){
            ans += x;
        }else if(s == "-"){
            ans -= x;
        }else if(s == "*"){
            ans *= x;
        }else if(s == "/" && x != 0){
        ans /= x;
        }else{
            cout << "error" << endl;
            break;
        }
        cout << i+1 << ":" << ans << endl;
  }
  // ここにプログラムを追記
}