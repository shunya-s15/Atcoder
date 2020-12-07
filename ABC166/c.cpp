#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    /*int n,m;
    cin >> n >> m;
    vector<pair<int,int>> h(n);
    for(int i=0;i<n;i++){
        cin >> h.at(i).first;
        h.at(i).second = i;
    }
    vector<pair<int,int>> ab(m);
    for(int i=0;i<m;i++){
        cin >> ab.at(i).first >> ab.at(i).second;
    }
    sort(h.begin(),h.end());
    reverse(h.begin(),h.end());
    vector<bool> flag(n,true);
    for(int i=0;i<n;i++){
        int height=h.at(i).first;
        int key=h.at(i).second;
        if(flag.at(key)){
            for(int j=0;j<m;j++){
                if(ab.at(j).first-1 == key){
                    if(h.at(ab.at(j).first-1).first > h.at(ab.at(j).second-1).first){
                        flag.at(ab.at(j).second-1) = false;
                    }else if(h.at(ab.at(j).first-1).first < h.at(ab.at(j).second-1).first){
                        flag.at(ab.at(j).first-1)= false;
                        break;
                    }else{
                        flag.at(ab.at(j).first-1)= false;
                        flag.at(ab.at(j).second-1)= false;
                        break;
                    }
                }else if(ab.at(j).second-1 == key){
                    if(h.at(ab.at(j).first-1).first > h.at(ab.at(j).second-1).first){
                        flag.at(ab.at(j).second-1) = false;
                        break;
                    }else if(h.at(ab.at(j).first-1).first < h.at(ab.at(j).second-1).first){
                        flag.at(ab.at(j).first-1)= false;
                    }else{
                        flag.at(ab.at(j).first-1)= false;
                        flag.at(ab.at(j).second-1)= false;
                        break;
                    }
                }
            }
        }
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        if(flag.at(i)){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;*/
    int n,m;
    cin >> n >> m;
    vector<pair<int,int>> h(n);
    for(int i=0;i<n;i++){
        cin >> h.at(i).first;
        h.at(i).second=0;
    }
    int a,b;
    for(int i=0;i<m;i++){
        cin >> a >> b;
        h.at(a-1).second = max(h.at(a-1).second,h.at(b-1).first);
        h.at(b-1).second = max(h.at(b-1).second,h.at(a-1).first);
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(h.at(i).first > h.at(i).second){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}