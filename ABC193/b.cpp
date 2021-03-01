#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n),p(n),x(n);
    for(int i=0;i<n;i++){
        cin>>a.at(i)>>p.at(i)>>x.at(i);
    }
    int ans=1e9;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(x.at(i)-a.at(i)>0){
            ans=min(ans,p.at(i));
            flag=true;
        }
    }
    if(flag){
        cout<<ans<<endl;
    }else{
        cout<<-1<<endl;
    }
    return 0;
}