#include<iostream>
using namespace std;
int main(){
 int a,b;
 cin>>a>>b;
 int key = a*b;
 if(key%2 == 0){
     cout<<"Even"<<endl;
 }else{
     cout<<"Odd"<<endl;
 }
 return 0;
}
