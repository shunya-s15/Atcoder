#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    int count_A=0;
    int count_T=0;
    int count_G=0;
    int count_C=0;
    for(int i=1;i<n;i+=2){
        for(int j=0;j<n-i;j++){
            count_A=0;
            count_T=0;
            count_G=0;
            count_C=0;
            for(int k=0;k<=i;k++){
                if(s.at(j+k) == 'A'){
                    count_A++;
                }else if(s.at(j+k) == 'T'){
                    count_T++;
                }else if(s.at(j+k) == 'G'){
                    count_G++;
                }else if(s.at(j+k) == 'C'){
                    count_C++;
                }
            }
            if(count_A == count_T && count_G == count_C){
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}