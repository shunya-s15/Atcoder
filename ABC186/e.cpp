#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int judge(int n,int s,int k,vector<bool> flag){
    int ans;
    while(1){
        //cout<<s<<endl;
        if(flag.at(s)){
            //cout<<"ok"<<endl;
            ans=-1;
            break;
        }else if(s==0){
            break;
        }else{
            flag.at(s)=true;
            ans+=(n-s)/k;
            if((n-s)%k==0){
                s=0;
            }else{
                int plus=k-((n-s)%k);
                while(plus>=n){
                    plus-=n;
                }
                s=plus;
            }
        }
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    vector<int> n(t);
    vector<int> s(t);
    vector<int> k(t);
    for(int i=0;i<t;i++){
        cin>>n.at(i)>>s.at(i)>>k.at(i);
    }
    for(int i=0;i<t;i++){
        vector<bool> flag(n.at(i),false);
        cout<<judge(n.at(i),s.at(i),k.at(i),flag)<<endl;
    }
    return 0;
}