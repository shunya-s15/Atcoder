#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    char a,b;
    cin >> a >> b;
    string as = "";
    string bs = "";
    int an=int(a)-int('0');
    int bn=int(b)-int('0');
    //cout << an << " " << bn << endl;
    for(int i=0;i<bn;i++){
        as += a;
    }
    for(int i=0;i<an;i++){
        bs += b;
    }
    if(as<bs){
        cout << as << endl;
    }else{
        cout << bs << endl;
    }
    return 0;
}