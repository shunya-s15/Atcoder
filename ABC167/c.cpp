#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n,m,x;
vector<int> c(12);
vector<vector<int>> a(12,vector<int>(12,0));
int ans=-1;

bool judge(vector<int> rikaido){
    bool flag;
    for(int i=0;i<m;i++){
        if(rikaido.at(i)<x){
            flag=false;
            return flag;
        }
    }
    flag=true;
    return flag;
}

void saiki(int y,int money,vector<int> rikaido){
    if(judge(rikaido)){
        if(ans==-1){
            ans=money;
        }else{
            ans=min(ans,money);
        }
        return;
    }else if(!judge(rikaido) && y == n){
        return;
    }else{
        for(int i=0;i<m;i++){
            rikaido.at(i)+=a.at(y).at(i);
        }
        money+=c.at(y);
        while(y < n){
            y++;
            saiki(y,money,rikaido);
        }
    }
    return;
}

int main(){
    cin>>n>>m>>x;
    for(int i=0;i<n;i++){
        cin >> c.at(i);
        for(int j=0;j<m;j++){
            cin >> a.at(i).at(j);
        }
    }
    for(int i=0;i<n;i++){
        vector<int> rikaido(m,0);
        saiki(i,0,rikaido);
    }
    cout << ans << endl;
    return 0;
}