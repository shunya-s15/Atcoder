#include<iostream>
#include<vector>
using namespace std;

int main(){
  int n,x;
  cin>>n>>x;
  int point=x;
  string s;
  cin>>s;
  for(int i=0;i<n;i++){
    if(s.at(i)=='o'){
      point++;
    }else{
      if(point==0){
      }else{
      	point--;
      }
    }
  }
  cout<<point<<endl;
  return 0;
}