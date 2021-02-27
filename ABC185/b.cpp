#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  int n,m,t;
  cin>>n>>m>>t;
  vector<int> a(m);
  vector<int> b(m);
  for(int i=0;i<m;i++){
    cin>>a.at(i)>>b.at(i);
  }
  int bt=n;
  int now=0;
  for(int i=0;i<m;i++){
    bt-=a.at(i)-now;
    if(bt<=0){
      cout<<"No"<<endl;
      return 0;
    }
    bt+=b.at(i)-a.at(i);
    if(bt>n){
      bt=n;
    }
    now=b.at(i);
  }
  bt-=t-now;
  if(bt<=0){
    cout<<"No"<<endl;
    return 0;
  }
  cout<<"Yes"<<endl;
  return 0;
}
  