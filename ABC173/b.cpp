#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    int A=0,W=0,T=0,R=0;
    for(int i=0;i<n;i++){
        cin >> s.at(i);
        if(s.at(i)=="AC"){
            A++;
        }else if(s.at(i)=="WA"){
            W++;
        }else if(s.at(i)=="TLE"){
            T++;
        }else if(s.at(i)=="RE"){
            R++;
        }
    }
    cout<<"AC x "<<A<<endl;
    cout<<"WA x "<<W<<endl;
    cout<<"TLE x "<<T<<endl;
    cout<<"RE x "<<R<<endl;
    return 0;
}