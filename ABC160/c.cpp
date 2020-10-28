#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int k,n;
    cin >> k >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a.at(i);
    }
    sort(a.begin(),a.end());
    vector<int> kukan(n);
    for(int i=0;i<n;i++){
        if(i==n-1){
            kukan.at(i) = k-a.at(i) + a.at(0);
        }else{
            kukan.at(i) = a.at(i+1)-a.at(i);
        }
    }
    sort(kukan.begin(),kukan.end());
    int ans=0;
    for(int i=0;i<n-1;i++){
        ans += kukan.at(i);
    }
    /*for(int i=0;i<n;i++){
        int key1 = a.at(i);
        int key2 = a.at(i);
        int key1_a=0;
        int key2_a=0;
        int dis1 = 0;
        int dis2 = 0;
        int j = i;
        int l = i;
        do{
            j++;
            if(j>=n){
                j -= n;
                dis1 += a.at(j)+k-key1;
                key1_a = a.at(j)+k-key1;
            }else{
                dis1+=a.at(j)-key1;
                key1_a = a.at(j)-key1;
            }
            //cout << "dis1: " << dis1 << endl;
            key1 = a.at(j);
        }while(j != i);
        dis1 -= key1_a;
        do{
            l--;
            if(l<0){
                l += n;
                dis2 += key2 + k - a.at(l);
                key2_a = key2+k-a.at(l);
            }else{
                dis2 += key2-a.at(l);
                key2_a = key2-a.at(l);
            }
            //cout << "dis2: " << dis2 << endl;
            key2 = a.at(l);
        }while(l != i);
        dis2 -= key2_a;
        ans = min(ans,min(dis1,dis2));
    }*/
    cout << ans << endl;
    return 0;
}