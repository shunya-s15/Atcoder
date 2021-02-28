#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cin>>s;
    int a='a';
    /*int z='z';
    int A='A';
    int Z='Z';
    char B=A+1;
    cout<<"a: "<<a<<endl;
    cout<<"z: "<<z<<endl;
    cout<<"A: "<<A<<endl;
    cout<<"Z: "<<Z<<endl;
    cout<<"B: "<<B<<endl;*/
    for(int i=0;i<s.size();i++){
        int key=s.at(i);
        if((i+1)%2==0){
            if(key>=a){
                cout<<"No"<<endl;
                return 0;
            }
        }else{
            if(key<a){
                cout<<"No"<<endl;
                return 0;
            }
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}