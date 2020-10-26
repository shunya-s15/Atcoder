#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int njou(int x,int n){
    int ans=1;
    for(int i=0;i<n;i++){
        ans *= x;
    }
    return ans;
}

int main(){
    int n,m;
    cin >> n >> m;
    vector<pair<int,int>> sc(m);
    for(int i=0;i<m;i++){
        cin >> sc.at(i).first >> sc.at(i).second;
    }
    sort(sc.begin(),sc.end());
    bool flag=true;
    int ans=0;
    for(int i=0;i<m-1;i++){
        if(sc.at(i).first == sc.at(i+1).first && sc.at(i).second != sc.at(i+1).second){
            flag = false;
        }
    }
    for(int i=0;i<m;i++){
        if(n != 1 && sc.at(i).first == 1 && sc.at(i).second == 0){
            flag = false;
        }
    }
    bool flag1=true,flag2=true,flag3=true;
    if(flag){
        for(int i=0;i<m;i++){
            if(sc.at(i).first == 1 && flag1){
                ans += sc.at(i).second*njou(10,n-sc.at(i).first);
                flag1=false;
                continue;
            }
            if(sc.at(i).first == 2 && flag2){
                ans += sc.at(i).second*njou(10,n-sc.at(i).first);
                flag2=false;
                continue;
            }
            if(sc.at(i).first == 3 && flag3){
                ans += sc.at(i).second*njou(10,n-sc.at(i).first);
                flag3=false;
                continue;
            }
        }
    }
    int keta;
    if(flag){
        if(ans/100>0){
            keta=3;
        }else if(ans/10>0){
            keta = 2;
        }else{
            keta=1;
        }
    }
    if(flag){
        if(n != 1 && n>keta){
            ans += njou(10,n-1);
        }
    }
    if(flag){
        cout << ans << endl;
    }else{
        cout << -1 << endl;
    }
    return 0;
}