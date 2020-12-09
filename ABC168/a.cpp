#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string n;
    cin >> n;
    char key;
    key = n.at(n.length()-1);
    if(key=='2'||key=='4'||key=='5'||key=='7'||key=='9'){
        cout<<"hon"<<endl;
    }else if(key=='3'){
        cout<<"bon"<<endl;
    }else{
        cout<<"pon"<<endl;
    }
    return 0;
}