#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    string s;
    cin >> s;
    bool ans=false;
    int key=104;
    int key2=16;
    if(s.length()==1&&s.at(0)=='8'){
        cout << "Yes" << endl;
        return 0;
    }
    else if(s.length()==2){
        while(key2<100){
            bool flag1=false,flag2=false;
            string copy=to_string(key2);
            char keta2=copy.at(1);
            char keta1=copy.at(0);
            if((keta1==s.at(0) && keta2==s.at(1)) || (keta1==s.at(1)&&keta2==s.at(0))){
                cout << "Yes" << endl;
                return 0;
            }
            key2+=8;
        }
    }
    while(key<1000){
        bool flag1=false,flag2=false,flag3=false;
        string copy=to_string(key);
        char keta3=copy.at(2);
        char keta2=copy.at(1);
        char keta1=copy.at(0);
        int i,j,k;
        /*cout << keta3 << endl;
        cout << keta2 << endl;
        cout << keta1 << endl;*/
        for(i=0;i<s.length();i++){
            if(keta3==s.at(i)){
                flag3=true;
                break;
            }
        }
        for(j=0;j<s.length();j++){
            if(keta2==s.at(j)&&i!=j){
                flag2=true;
                break;
            }
        }
        for(k=0;k<s.length();k++){
            if(keta1==s.at(k)&&i!=k&&j!=k){
                flag1=true;
                break;
            }
        }
        if(flag3&&flag2&&flag1){
            ans=true;
            break;
        }
        key+=8;
    }
    if(ans){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}