#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int64_t> a(n);
    const int64_t limit = 1e18;
    for(int i=0;i<n;i++){
        cin >> a.at(i);
    }
    int64_t ans=1;
    for(int i=0;i<n;i++){
        if(a.at(i)==0){
            cout << 0 <<endl;
            return 0;
        }
    }
    for(int i=0;i<n;i++){
        int64_t key=limit/a.at(i);
        if(ans<key){
            ans*=a.at(i);
            //cout<<"roop1"<<endl;
        }else if(ans==key){
            if(limit%a.at(i)==0){
                ans*=a.at(i);
                //cout<<"roop2"<<endl;
            }else{
                ans=-1;
                //cout<<"b"<<endl;
                break;
            }
        }else{
            ans=-1;
            //cout<<"c"<<endl;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}