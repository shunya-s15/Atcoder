#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    for(int i=0;i<n;i++){
        cin>>x.at(i)>>y.at(i);
    }
    bool ans=false;
    int re_up,re_down,im_up,im_down;
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                re_down=x.at(j)-x.at(i);
                im_down=y.at(j)-y.at(i);
                re_up=x.at(k)-x.at(i);
                im_up=y.at(k)-y.at(i);
                if((re_down*im_up-re_up*im_down) == 0){
                    ans = true;
                    break;
                }
            }
            if(ans){
                break;
            }
        }
        if(ans){
            break;
        }
    }
    if(ans){
        cout << "Yes" <<endl;
    }else{
        cout << "No" <<endl;
    }
    return 0;
}