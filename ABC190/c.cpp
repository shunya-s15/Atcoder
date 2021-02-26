#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> a(m);
    vector<int> b(m);
    int k;
    for(int i=0;i<m;i++){
        cin>>a.at(i)>>b.at(i);
    }
    cin>>k;
    vector<int> c(k);
    vector<int> d(k);
    for(int i=0;i<k;i++){
        cin>>c.at(i)>>d.at(i);
    }
    int ans=0;
    for(int bit=0;bit<(1<<k);bit++){
        vector<int> bowl(n,0);
        int count=0;
        for(int i=0;i<k;i++){
            if(bit&(1<<i)){
                bowl.at(d.at(i)-1)++;
            }else{
                bowl.at(c.at(i)-1)++;
            }
        }
        for(int j=0;j<m;j++){
            if(bowl.at(a.at(j)-1)>0&&bowl.at(b.at(j)-1)>0){
                count++;
            }
        }
        ans=max(ans,count);
    }
    cout<<ans<<endl;
    return 0;
}