#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,m,x;
    int ans=-1;
    cin >> n >> m >> x;
    vector<int> c(n);
    vector<vector<int>> a(n,vector<int>(m));
    for(int i=0;i<n;i++){
        cin >> c.at(i);
        for(int j=0;j<m;j++){
            cin >> a.at(i).at(j);
        }
    }
    for(int bit=0;bit<(1<<n);bit++){
        vector<int> rikaido(m,0);
        int money=0;
        bool flag=true;
        for(int i=0;i<n;i++){
            if(bit & (1<<i)){
                money+=c.at(i);
                for(int j=0;j<m;j++){
                    rikaido.at(j) += a.at(i).at(j);
                }
            }
        }
        for(int i=0;i<m;i++){
            if(rikaido.at(i) < x){
                flag=false;
                break;
            }
        }
        if(flag){
            if(ans<0){
                ans=money;
            }else{
                ans=min(ans,money);
            }
        }
    }
    cout << ans << endl;
    return 0;
}
