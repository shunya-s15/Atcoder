#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int ans=1000;
  int a;
  for(int i=0;i<4;i++){
      cin>>a;
      ans=min(a,ans);
  }
  cout<<ans<<endl;
  return 0;
}