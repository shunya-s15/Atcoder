#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a.at(i);
    }
    sort(a.begin(),a.end());
    int k=a.at(n-1);
    pair<int,int> x(0,0);
    for(int i=2;i<=k;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(a.at(j)%i==0){
                count++;
            }
        }
        if(count>=x.first){
            x.first=count;
            x.second=i;
        }
    }
    cout<<x.second<<endl;
    return 0;
}