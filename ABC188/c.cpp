#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int people=(1<<n);
    vector<int> rate(people);
    for(int i=0;i<people;i++){
        cin>>rate.at(i);
    }

    int half=(1<<n-1);
    vector<int> groupa(half);
    vector<int> groupb(half);
    for(int i=0;i<half;i++){
        groupa.at(i)=rate.at(i);
        groupb.at(i)=rate.at(i+half);
    }
    int maxa=groupa.at(0),maxb=groupb.at(0),anum=0,bnum=0;
    for(int i=1;i<half;i++){
        if(maxa<groupa.at(i)){
            maxa=groupa.at(i);
            anum = i;
        }
        if(maxb<groupb.at(i)){
            maxb=groupb.at(i);
            bnum=i;
        }
    }
    if(maxa<maxb){
        cout<<anum+1<<endl;
    }else{
        cout<<half+bnum+1<<endl;
    }

    /*int ans;
    vector<int> winer;
    for(int i=0;i<people;i++){
        winer.push_back(i);
    }
    for(int i=0;i<n;i++){
        vector<int> next_winer;
        for(int j=0;j<(1<<(n-i-1));j++){
            if(rate.at(winer.at(2*j))<rate.at(winer.at(2*j+1))){
                next_winer.push_back(winer.at(2*j+1));
                ans=winer.at(2*j);
            }else{
                next_winer.push_back(winer.at(2*j));
                ans=winer.at(2*j+1);
            }
        }
        winer = next_winer;
    }
    cout<<ans+1<<endl;*/
    return 0;
}