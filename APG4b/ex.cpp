#include <iostream>
using namespace std;

int main() {
  string S;
  cin >> S;

  // ここにプログラムを追記
  int ans=1;
  for(int i=1;i<S.size();i+=2){
    if(S.at(i) == '+'){
      ans += 1;
    }else if(S.at(i) == '-'){
      ans -= 1;
    }
  }
  cout << ans << endl;
  return 0;
}
