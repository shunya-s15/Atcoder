#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int anscount=0;

bool judge(vector<bool> &flag){
    bool ans=true;
    for(int i=0;i<flag.size();i++){
        if(!flag.at(i)){
            ans=false;
        }
    }
    return ans;
}

void saiki(int before,int now,vector<bool> flag,int cost,vector<vector<int>> t,int k){
    //cout<<"before:"<<before<<endl;
    //cout<<"now:"<<now<<endl;
    cost+=t.at(before).at(now);
    //cout<<"cost:"<<cost<<endl;
    flag.at(now)=true;
    if(judge(flag)){
        cost+=t.at(now).at(0);
        if(cost==k){
            anscount++;
        }
        return;
    }
    for(int i=0;i<flag.size();i++){
        if(!flag.at(i)){
            //cout<<"saiki2:"<<i<<endl;
            saiki(now,i,flag,cost,t,k);
        }
    }
    return;
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<vector<int>> t(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>t.at(i).at(j);
        }
    }
    vector<bool> flag(n,false);
    int now=0,cost=0,before=0;
    saiki(before,now,flag,cost,t,k);
    cout<<anscount<<endl;
    return 0;
}