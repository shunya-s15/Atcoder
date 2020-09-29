#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> card(n);
    for(int i=0;i<n;i++){
        cin >> card.at(i);
    }
    vector<string> ans;
    sort(card.begin(),card.end());
    do{
        string key = "";
        for(int i=0;i<k;i++){
            key += to_string(card.at(i));
            //key += " ";
        }
        /*for(int x:card){
            key += to_string(x);
            key += " ";
        }*/
        ans.push_back(key);
    }while(next_permutation(card.begin(),card.end()));
    /*for(string i:ans){
        cout << i << endl;
    }*/
    int count = 0;
    for(int i=0;i<ans.size()-1;i++){
        bool flag = true;
        for(int j=i+1;j<ans.size();j++){
            if(ans.at(i) == ans.at(j)){
                flag = false;
                break;
            }
        }
        if(flag){
            count++;
        }
    }
    count++;
    cout << count << endl;
    return 0;
}